#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "This program classifies a num even or odd." << endl;
    cout << "Enter a number: ";
    cin>>n;
    //n = GetInteger();
    if (n % 2 == 0) {
        cout << "That number is even." << endl;
    } else {
        cout << "That number is odd." << endl;
    }
    return 0;
 }
