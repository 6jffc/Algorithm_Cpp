#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

const int NUM_ITERATIONS = 10;

struct DekkerFlags {
    atomic<bool> C1;
    atomic<bool> C2;
    atomic<int> turn;

    DekkerFlags() : C1(false), C2(false), turn(1) {}
};

void processP1(DekkerFlags& dekker_flags) {
    do {
        dekker_flags.C1 = true;
        while (dekker_flags.C2 == true) {
            if (dekker_flags.turn == 2) {
                dekker_flags.C1 = false;
                while (dekker_flags.turn == 2);
                dekker_flags.C1 = true;
            }
        }
        
        // critical section of ProcessP1
        cout << "Process P1 is in critical section." << endl;

        dekker_flags.turn = 2;
        dekker_flags.C1 = false;

        // remainder section of ProcessP1
    } while (true);
}

void processP2(DekkerFlags& dekker_flags) {
    do {
        dekker_flags.C2 = true;
        while (dekker_flags.C1 == true) {
            if (dekker_flags.turn == 1) {
                dekker_flags.C2 = false;
                while (dekker_flags.turn == 1);
                dekker_flags.C2 = true;
            }
        }
        
        // critical section of ProcessP2
        cout << "Process P2 is in critical section." << endl;

        dekker_flags.turn = 1;
        dekker_flags.C2 = false;

        // remainder section of ProcessP2
    } while (true);
}

int main() {
    DekkerFlags dekker_flags;

    // Kh?i t?o hai lu?ng (threads) cho ProcessP1 và ProcessP2
    thread t1(processP1, ref(dekker_flags));
    thread t2(processP2, ref(dekker_flags));

    // Ð?i các lu?ng k?t thúc
    t1.join();
    t2.join();

    return 0;
}

