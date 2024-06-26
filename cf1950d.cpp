#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int binaryDecimals[] = {0, 1, 10, 11,121, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111,10201, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111,12321,12100, 100000};
        int size = sizeof(binaryDecimals) / sizeof(binaryDecimals[0]);
        bool found = false;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if ((binaryDecimals[i] * binaryDecimals[j]) == n) {
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
