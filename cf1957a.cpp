#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> sticks(n);
        unordered_map<int, int> count;

        for (int i = 0; i < n; i++) {
            cin >> sticks[i];
            count[sticks[i]]++;
        }

        int polygons = 0;
        for (auto& pair : count) {
            if(pair.second >3){
                polygons += pair.second / 3;
            }
        }

        cout << polygons<< endl;
    }

    return 0;
}
