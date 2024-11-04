#include <iostream>
#include <string>
#include <map>
//#include <cctype> // Th�m th� vi?n cctype �? s? d?ng h�m toupper
using namespace std;

// �?nh ngh?a h�m chuy?n �?i k? t? th�nh chu?i th?p l?c ph�n
string doi(char thapluc) {
    switch (thapluc) { // S? d?ng h�m toupper �? chuy?n k? t? th�nh in hoa tr�?c khi so s�nh
        case '0':
            return "0000";
        case '1':
            return "0001";
        case '2':
            return "0010";
        case '3':
            return "0011";
        case '4':
            return "0100";
        case '5':
            return "0101";
        case '6':
            return "0110";
        case '7':
            return "0111";
        case '8':
            return "1000";
        case '9':
            return "1001";
        case 'A':
            return "1010";
        case 'B':
            return "1011";
        case 'C':
            return "1100";
        case 'D':
            return "1101";
        case 'E': // Th�m tr�?ng h?p k? t? 'E' v�o
            return "1110";
        case 'F':
            return "1111";
        default: // X? l? tr�?ng h?p kh�ng h?p l?
            return "0000"; // Tr? v? gi� tr? m?c �?nh n?u k? t? kh�ng h?p l?
    }
}

int main() {
    string thapluc;
    cin >> thapluc;

    string khoangcach = " ";
    for (int i = 0; i < thapluc.length(); i++) {
        khoangcach += doi(thapluc[i]);
    }

    for (int i = 0; i < khoangcach.length(); i++) { // S?a �i?u ki?n l?p
        cout << khoangcach[i];
        if ((i + 1) % 4 == 0 && i + 1 != khoangcach.length()) { // Th�m �i?u ki?n �? tr�nh in kho?ng tr?ng sau k? t? cu?i c�ng
            cout << " ";
        }
    }

    return 0;
}

