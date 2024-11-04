/*Bài 16. M?t s? ???c g?i là s? Mersen n?u nó là s? nguyên t? ???c bi?u di?n d??i d?ng 2P -1 trong ?ó P c?ng là m?t s? nguyên t?. Cho s? t? nhiên n, tìm t?t c? các s? Mersen nh? h?n n.*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Hàm ki?m tra s? nguyên t?
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Hàm t?o danh sách các s? nguyên t? nh? hõn n
vector<int> primesLessThanN(int n) {
    vector<int> primes;
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

// Hàm ki?m tra xem m?t s? có ph?i là s? Mersen không
bool isMersenne(int p) {
    int mersenne = pow(2, p) - 1;
    return isPrime(mersenne);
}

// Hàm t?m t?t c? các s? Mersen nh? hõn n
vector<int> findMersenneNumbers(int n) {
    vector<int> primes = primesLessThanN(n);
    vector<int> mersenneNumbers;
    for (int i = 0; i < primes.size(); ++i) {
    int prime = primes[i];
    if (isMersenne(prime)) {
        mersenneNumbers.push_back(pow(2, prime) - 1);
    }
}
    return mersenneNumbers;
}

int main() {
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    
    vector<int> mersenneNumbers = findMersenneNumbers(n);
    
    cout << "Cac so Mersenne nho hon " << n << " la: ";
    for (int i = 0; i < mersenneNumbers.size(); ++i) {
    int mersenne = mersenneNumbers[i];
}
    
    return 0;
}

