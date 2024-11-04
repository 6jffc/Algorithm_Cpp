#include <iostream>
#include <conio.h> // Th� vi?n cho h�m _kbhit v� _getch
#include <windows.h> // Th� vi?n cho h�m Sleep
using namespace std;

int main() {
    string s = "Hello, World!"; // Chu?i c?n di chuy?n
    int screenWidth = 80; // �? r?ng c?a m�n h?nh console
    int pos = 0; // V? tr� hi?n t?i c?a chu?i tr�n m�n h?nh

    // V?ng l?p �? di chuy?n chu?i t? tr�i sang ph?i
    while (true) {
        system("cls"); // X�a m�n h?nh console
        // In kho?ng tr?ng �? di chuy?n chu?i �?n v? tr� mong mu?n
        for (int i = 0; i < pos; i++) {
            cout << " ";
        }
        cout << s; // In chu?i

        // N?u c� ph�m ��?c nh?n v� l� ph�m ESC (ASCII 27), tho�t kh?i v?ng l?p
        if (_kbhit() && _getch() == 27) {
            break;
        }

        pos++; // Di chuy?n chu?i sang ph?i
        if (pos >= screenWidth - s.length()) { // N?u chu?i �?n cu?i m�n h?nh
            pos = 0; // Di chuy?n v? �?u
        }
        
        Sleep(100); // D?ng 100 milliseconds �? t?o hi?u ?ng di chuy?n m�?t m�
    }

    return 0;
}

