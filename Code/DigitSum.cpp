#include<iostream>
using namespace std;

 
 int DigitSum(int n) {
    int sum;
    sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
 }
 
 int main(){
 	int n;
	cout<<"Hay nhap so n vao day = ";
	cin>>n;
	cout<<"day la ket qua "<<DigitSum(n);
	return 0; 
 } 

