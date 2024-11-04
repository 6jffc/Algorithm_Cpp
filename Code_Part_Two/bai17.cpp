/*Bài 17. Cho s? t? nhiên n. Hãy phân tích n thành tích các th?a s? nguyên t?. Ví d? 12 =2*2*3.*/
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void phanTichNgT(int n,vector<int> ngt){
	while(n%2==0){
		ngt.push_back(2);
		n/=2; 
	} 
	for(int i = 3; i*i<=n; i+=2){
		while(n%i==0){
			ngt.push_back(i);
			n/=i; 
		} 
	}
	if(n>2){
		ngt.push_back(n); 
	} 
} 
int main(){
	int n;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> n;

    vector<int> ngt;
    phanTichNgT(n, ngt);

    cout << "Phan tich " << n << " thanh tich cac thua so nguyen to la: ";
    for (int i = 0; i < ngt.size(); ++i) {
        cout << ngt[i];
        if (i < ngt.size() - 1) {
            cout << "*";
        }
    }
    cout << endl;

    return 0;
} 
