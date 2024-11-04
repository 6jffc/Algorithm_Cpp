#include <iostream>
#include <string>
using namespace std;

bool willAliceWin(int n, string& s) {
    // Count the number of facing-up coins
    int upCount = 0;
    for (char c:s) {
        if (c == 'U') {
            upCount++;
        }
    }

    // If there's only one facing-up coin or no facing-up coins, Alice loses
    if (upCount <= 1) {
        return false;
    }

    // Alice wins if the number of facing-up coins is odd
    return upCount % 2 != 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (willAliceWin(n, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

