#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string HoaThuong(const string &s) {
    string result = s;
    bool toUpper = false; // Kh?i t?o bi?n toUpper v?i gi� tr? ban �?u l� false
    for(size_t i = 0; i < result.length(); i++) {
        if(isalpha(result[i])) {
            // N?u l� k? t? ch? c�i th? �?o ng�?c hoa/th�?ng
            result[i] = toUpper ? toupper(result[i]) : tolower(result[i]);
            toUpper = !toUpper; // �?o ng�?c gi� tr? c?a bi?n toUpper �? chuy?n �?i gi?a hoa v� th�?ng
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Hay nhap chu muon thay doi: ";
    cin >> s;
    
    string result = HoaThuong(s); // L�u k?t qu? t? h�m HoaThuong v�o bi?n result
    
    cout << "Chuoi da duoc chuyen doi: " << result << endl; // In ra k?t qu? �? chuy?n �?i
    
    return 0;
}

