#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Hàm t?m ki?m nh? phân
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Tr? v? ch? s? c?a ph?n t? n?u nó ğı?c t?m th?y
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Tr? v? -1 n?u không t?m th?y
}

int main() {
    // D?y s? ğ? cho
    vector<int> numbers;
    numbers.push_back(10); 
    numbers.push_back(22); 
    numbers.push_back(13); 
    numbers.push_back(87); 
    numbers.push_back(11); 
    numbers.push_back(34); 
    numbers.push_back(43); 
    // S?p x?p d?y s? ğ? th?c hi?n t?m ki?m nh? phân
    sort(numbers.begin(), numbers.end());

    // S? c?n t?m ki?m
    int target1 = 11;
    int target2 = 43;

    // T?m ki?m s? 11
    int index1 = binarySearch(numbers, target1);
    if (index1 != -1) {
        cout << "So " << target1 << " tim thay tai vi tri " << index1 << endl;
    } else {
        cout << "So " << target1 << " khong tim thay trong day." << endl;
    }

    // T?m ki?m s? 43
    int index2 = binarySearch(numbers, target2);
    if (index2 != -1) {
        cout << "So " << target2 << " tim thay tai vi tri " << index2 << endl;
    } else {
        cout << "So " << target2 << " khong tim thay trong day." << endl;
    }

    return 0;
}

