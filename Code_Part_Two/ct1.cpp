#include <iostream>
#include <string>
#include <map>
//#include <cctype> // Thêm thý vi?n cctype ð? s? d?ng hàm toupper
using namespace std;

// Ð?nh ngh?a hàm chuy?n ð?i k? t? thành chu?i th?p l?c phân
string doi(char thapluc) {
    switch (thapluc) { // S? d?ng hàm toupper ð? chuy?n k? t? thành in hoa trý?c khi so sánh
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
        case 'E': // Thêm trý?ng h?p k? t? 'E' vào
            return "1110";
        case 'F':
            return "1111";
        default: // X? l? trý?ng h?p không h?p l?
            return "0000"; // Tr? v? giá tr? m?c ð?nh n?u k? t? không h?p l?
    }
}

int main() {
    string thapluc;
    cin >> thapluc;

    string khoangcach = " ";
    for (int i = 0; i < thapluc.length(); i++) {
        khoangcach += doi(thapluc[i]);
    }

    for (int i = 0; i < khoangcach.length(); i++) { // S?a ði?u ki?n l?p
        cout << khoangcach[i];
        if ((i + 1) % 4 == 0 && i + 1 != khoangcach.length()) { // Thêm ði?u ki?n ð? tránh in kho?ng tr?ng sau k? t? cu?i cùng
            cout << " ";
        }
    }

    return 0;
}

