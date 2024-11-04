/*Bài 8: Vi?t ch??ng trình tính giá tr? t?ng c?ng c?a 1 s?n ph?m có k? c? thu?, bi?t r?ng t? su?t thu? là 13.6% tính trên giá g?c.
 Giá g?c c?a s?n ph?m ???c ??c vào và c?n in ra:
-	Ti?n thu?
-	Giá ?ã có thu?
*/
#include <iostream>
using namespace std;

int main() {
    double giaGoc; // Giá g?c c?a s?n ph?m
    double tySuatThue = 0.136; // T? su?t thu? là 13.6%

    // Nh?p giá g?c t? ngý?i dùng
    cout << "Nhap gia goc cua san pham: ";
    cin >> giaGoc;

    // Tính ti?n thu?
    double tienThue = giaGoc * tySuatThue;

    // Tính giá ð? có thu?
    double giaDaCoThue = giaGoc + tienThue;

    // In ra k?t qu?
    cout << "Tien thue: " << tienThue << endl;
    cout << "Gia da co thue: " << giaDaCoThue << endl;

    return 0;
}

