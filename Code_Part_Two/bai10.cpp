/*B�i 10. Vi?t ch??ng  tr�nh  cho b�i t?p sau:
Cho s? t? nhi�n n. H�y t�m t?t c? c�c b? 3 c�c s? t? nhi�n a, b, c sao cho a2+b2 = c2 trong ?� a<= b< =c <=n .
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
