#include <iostream>
#include <vector>
using namespace std;

// Hàm s?p x?p ch?n
void selectionSort(vector<int>& arr) {
    int n = arr.size();

    // Duy?t qua t?t c? các ph?n t? trong m?ng
    for (int i = 0; i < n - 1; ++i) {
        // T?m ph?n t? nh? nh?t trong m?ng chýa ðý?c s?p x?p
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Hoán ð?i ph?n t? nh? nh?t v?i ph?n t? ð?u tiên chýa ðý?c s?p x?p
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    vector<int> numbers ;
    numbers.push_back(64);
    numbers.push_back(25);
    numbers.push_back(12);
    numbers.push_back(22);
    numbers.push_back(11);
    
    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Áp d?ng gi?i thu?t s?p x?p ch?n
    selectionSort(numbers);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

