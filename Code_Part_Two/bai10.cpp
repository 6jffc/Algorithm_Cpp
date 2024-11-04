/*Bài 10. Vi?t ch??ng  trình  cho bài t?p sau:
Cho s? t? nhiên n. Hãy tìm t?t c? các b? 3 các s? t? nhiên a, b, c sao cho a2+b2 = c2 trong ?ó a<= b< =c <=n .
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Dua ra 1 so tu nhien ra day: ";
	cin>>n;
	cout << "Cac bo 3 so tu nhien a, b, c thoai man a^2 + b^2 = c^2 voi a <= b <= c <= n la:\n";
	for(int a = 1; a<=n;++a){
		for(int b =a; b<= n; ++b){
			for(int c = b; c <= n; ++c){
				if(a*2+b*2==c*2){
					cout<<"( a = "<<a<<", b = "<<b<<", c = "<<c<<")";
				}
			}
		}
	}
	return 0;
}
