#include <iostream>
#include <conio.h> // Thý vi?n cho hàm _kbhit và _getch
#include <windows.h> // Thý vi?n cho hàm Sleep
using namespace std;

int main() {
    string s = "Hello, World!"; // Chu?i c?n di chuy?n
    int screenWidth = 80; // Ð? r?ng c?a màn h?nh console
    int pos = 0; // V? trí hi?n t?i c?a chu?i trên màn h?nh

    // V?ng l?p ð? di chuy?n chu?i t? trái sang ph?i
    while (true) {
        system("cls"); // Xóa màn h?nh console
        // In kho?ng tr?ng ð? di chuy?n chu?i ð?n v? trí mong mu?n
        for (int i = 0; i < pos; i++) {
            cout << " ";
        }
        cout << s; // In chu?i

        // N?u có phím ðý?c nh?n và là phím ESC (ASCII 27), thoát kh?i v?ng l?p
        if (_kbhit() && _getch() == 27) {
            break;
        }

        pos++; // Di chuy?n chu?i sang ph?i
        if (pos >= screenWidth - s.length()) { // N?u chu?i ð?n cu?i màn h?nh
            pos = 0; // Di chuy?n v? ð?u
        }
        
        Sleep(100); // D?ng 100 milliseconds ð? t?o hi?u ?ng di chuy?n mý?t mà
    }

    return 0;
}

