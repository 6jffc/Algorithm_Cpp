/*B�i 12. Cho s? t? nhi�n n. H�y li?t k� t?t c? c�c s? nguy�n t? nh? h?n n.*/
#include<iostream>
using namespace std;
bool kiemtra(int so){
	if(so <= 1){
		return false;
	}
	for(int i = 2; i*i <= so; ++i){
		if(so%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cout<<"Hay nhap so n vao day";
	cin>>n;
    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; ++i) {
        if (kiemtra(i)) {
            cout << i << " ";
        }
    }
}
