/*B�i 8: Vi?t ch??ng tr�nh t�nh gi� tr? t?ng c?ng c?a 1 s?n ph?m c� k? c? thu?, bi?t r?ng t? su?t thu? l� 13.6% t�nh tr�n gi� g?c.
 Gi� g?c c?a s?n ph?m ???c ??c v�o v� c?n in ra:
-	Ti?n thu?
-	Gi� ?� c� thu?
*/
#include <iostream>
using namespace std;

int main() {
    double giaGoc; // Gi� g?c c?a s?n ph?m
    double tySuatThue = 0.136; // T? su?t thu? l� 13.6%

    // Nh?p gi� g?c t? ng�?i d�ng
    cout << "Nhap gia goc cua san pham: ";
    cin >> giaGoc;

    // T�nh ti?n thu?
    double tienThue = giaGoc * tySuatThue;

    // T�nh gi� �? c� thu?
    double giaDaCoThue = giaGoc + tienThue;

    // In ra k?t qu?
    cout << "Tien thue: " << tienThue << endl;
    cout << "Gia da co thue: " << giaDaCoThue << endl;

    return 0;
}

