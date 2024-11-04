/*B�i 16. M?t s? ???c g?i l� s? Mersen n?u n� l� s? nguy�n t? ???c bi?u di?n d??i d?ng 2P -1 trong ?� P c?ng l� m?t s? nguy�n t?. Cho s? t? nhi�n n, t�m t?t c? c�c s? Mersen nh? h?n n.*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// H�m ki?m tra s? nguy�n t?
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

// H�m t?o danh s�ch c�c s? nguy�n t? nh? h�n n
vector<int> primesLessThanN(int n) {
    vector<int> primes;
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

// H�m ki?m tra xem m?t s? c� ph?i l� s? Mersen kh�ng
bool isMersenne(int p) {
    int mersenne = pow(2, p) - 1;
    return isPrime(mersenne);
}

// H�m t?m t?t c? c�c s? Mersen nh? h�n n
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

