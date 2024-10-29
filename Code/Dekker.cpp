#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

const int NUM_ITERATIONS = 10;

struct DekkerFlags {
    atomic<int> flag[2];
    atomic<int> turn;

    DekkerFlags() {
        flag[0] = 0;
        flag[1] = 0;
        turn = 0;
    }
};

void process(int id, DekkerFlags& dekker_flags) {
    for (int i = 0; i < NUM_ITERATIONS; ++i) {
        // B?t ð?u ph?n ð?ng b? hóa
        dekker_flags.flag[id] = 1; // Ðánh d?u r?ng ti?n tr?nh id mu?n vào vùng ð?ng b?
        while (dekker_flags.flag[1 - id] == 1) {
            if (dekker_flags.turn != id) {
                dekker_flags.flag[id] = 0; // Ti?n tr?nh id ch? ð?i lý?t c?a ti?n tr?nh kia
                while (dekker_flags.turn != id)
                    ; // Ch? ð?i lý?t c?a ti?n tr?nh id
                dekker_flags.flag[id] = 1; // Ðánh d?u l?i r?ng ti?n tr?nh id mu?n vào vùng ð?ng b?
            }
        }

        // Vùng ð?ng b? (critical section)
        cout << "Process " << id << " is in critical section." << endl;

        // K?t thúc ph?n ð?ng b? hóa
        dekker_flags.turn = 1 - id; // Chuy?n lý?t cho ti?n tr?nh kia
        dekker_flags.flag[id] = 0; // Ðánh d?u r?ng ti?n tr?nh id ð? k?t thúc vùng ð?ng b?
    }
}

int main() {
    DekkerFlags dekker_flags;

    // Kh?i t?o hai lu?ng (threads)
    thread t1(process, 0, ref(dekker_flags));
    thread t2(process, 1, ref(dekker_flags));

    // Ð?i các lu?ng k?t thúc
    t1.join();
    t2.join();

    return 0;
}

