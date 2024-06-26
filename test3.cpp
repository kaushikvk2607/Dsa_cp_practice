#include <iostream>
#include <vector>
using namespace std;

string checkBalance(vector<int>& arr, int size) {
    int left = 1;
    int right = size - 2;
    while (left <= right) {
        int x = arr[right + 1];
        arr[right + 1] -= x;
        arr[right] -= (x * 2);
        arr[right - 1] -= x;

        if (arr[right - 1] < 0 || arr[right] < 0 || arr[right + 1] < 0) return "NO";
        right--;

        int y = arr[left - 1];
        arr[left - 1] -= y;
        arr[left] -= (y * 2);
        arr[left + 1] -= y;
        if (arr[left - 1] < 0 || arr[left] < 0 || arr[left + 1] < 0) return "NO";

        left++;
    }
    for (int x : arr) {
        if (x != 0) return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<int> arr(size);
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << checkBalance(arr, size) << endl;
    }
    return 0;
}
