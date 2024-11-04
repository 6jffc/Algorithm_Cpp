/*Bài 2: Viet chuong trình dem so lan xuat hien cua tu trong mot câu*/
#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string cau;
	char kitu;
	char tucan;
	cout<<"Hay nhap cau ra day: ";
	getline(cin,cau);
	cout<<"Tu can tim la: ";
	cin>>tucan;
	int dem = 0;
	for(int i = 0; i < cau.length(); i++){
		kitu = cau[i];
		if(tucan==kitu) dem++; 
	} 
	cout<<"So lan lap lai la: "<<dem; 
	return 0; 
 } 
 
