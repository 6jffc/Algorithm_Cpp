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
        // B?t �?u ph?n �?ng b? h�a
        dekker_flags.flag[id] = 1; // ��nh d?u r?ng ti?n tr?nh id mu?n v�o v�ng �?ng b?
        while (dekker_flags.flag[1 - id] == 1) {
            if (dekker_flags.turn != id) {
                dekker_flags.flag[id] = 0; // Ti?n tr?nh id ch? �?i l�?t c?a ti?n tr?nh kia
                while (dekker_flags.turn != id)
                    ; // Ch? �?i l�?t c?a ti?n tr?nh id
                dekker_flags.flag[id] = 1; // ��nh d?u l?i r?ng ti?n tr?nh id mu?n v�o v�ng �?ng b?
            }
        }

        // V�ng �?ng b? (critical section)
        cout << "Process " << id << " is in critical section." << endl;

        // K?t th�c ph?n �?ng b? h�a
        dekker_flags.turn = 1 - id; // Chuy?n l�?t cho ti?n tr?nh kia
        dekker_flags.flag[id] = 0; // ��nh d?u r?ng ti?n tr?nh id �? k?t th�c v�ng �?ng b?
    }
}

int main() {
    DekkerFlags dekker_flags;

    // Kh?i t?o hai lu?ng (threads)
    thread t1(process, 0, ref(dekker_flags));
    thread t2(process, 1, ref(dekker_flags));

    // �?i c�c lu?ng k?t th�c
    t1.join();
    t2.join();

    return 0;
}

