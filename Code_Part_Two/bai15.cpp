/*Bài 15. Hãy li?t kê t?t c? các s? nguyên t? có 5 ch? s? sao cho t?ng s? các ch? s? trong s? nguyên t? ?ó ?úng b?ng S cho tr??c 1?S?45.*/
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false; 
    if(n<=3) return true; 
    if(n%2==0 && n%3 == 0) return false;
    for(int i = 5; i*i<=n; i += 6){
        if(n%i== 0 || n%(i+2) ==0)
            return false; 
    } 
    return true; 
} 

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void listPrimesWithSum(int S) {
    for (int i = 10000; i <= 99999; ++i) {
        if (isPrime(i) && sumOfDigits(i) == S) {
            cout << i << " ";
        }
    }
}

int main() {
    int S;
    cout << "Nhap vao gia tri S (1 <= S <= 45): ";
    cin >> S;
    
    cout << "Cac so nguyen to co 5 chu so va tong cac chu so bang " << S << " la: ";
    listPrimesWithSum(S);
    
    return 0;
}

