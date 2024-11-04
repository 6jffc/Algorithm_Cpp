/*Bài 6: Vi?t ch??ng trình ki?m tra 1 password là ?úng hay sai ( nh?p t?i ?a 3 l*/
#include<iostream>
#include<string>
using namespace std;

const int toidanhap = 3;
const string matkhau = "52571";

int main(){
	string mk;
	int dem = 0;
	while (dem < toidanhap )
	  {
		cout<<"Hay nhap mat khau tai khoan cua ban: ";
		cin>>mk; 
	    
	  if(mk == matkhau)
	  {
	  	cout<<"Ban da nhap dung mk.";
		return 0; 
	   } 
	   else{
	   	dem++;
		if(dem<toidanhap){
			cout<<"Ban da nhap sai mat khau. Ban con "<<toidanhap-dem<<" lan nhap."; 
		} 
		else {
			cout<<"Ban da nhap mat khau sai "<<toidanhap<<" lan. Tai khoan cua ban tam thoi bi khoa."
		} 
	   } 
} 
return 0
}
