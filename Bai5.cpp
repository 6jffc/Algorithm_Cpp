#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string HoaThuong(const string &s) {
    string result = s;
    bool toUpper = false; // Kh?i t?o bi?n toUpper v?i giá tr? ban ð?u là false
    for(size_t i = 0; i < result.length(); i++) {
        if(isalpha(result[i])) {
            // N?u là k? t? ch? cái th? ð?o ngý?c hoa/thý?ng
            result[i] = toUpper ? toupper(result[i]) : tolower(result[i]);
            toUpper = !toUpper; // Ð?o ngý?c giá tr? c?a bi?n toUpper ð? chuy?n ð?i gi?a hoa và thý?ng
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Hay nhap chu muon thay doi: ";
    cin >> s;
    
    string result = HoaThuong(s); // Lýu k?t qu? t? hàm HoaThuong vào bi?n result
    
    cout << "Chuoi da duoc chuyen doi: " << result << endl; // In ra k?t qu? ð? chuy?n ð?i
    
    return 0;
}

