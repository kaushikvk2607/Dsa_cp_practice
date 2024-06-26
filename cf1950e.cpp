#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int k = 1; k <= n; ++k) {
            if (n % k == 0) {
                bool found = false;
                for (int i = 0; i < k; i++) {
                    string pattern = s.substr(i, k);
                    string currentString = "";
                    int diffCount = 0; 
                    for (int i = 0; i < n / k; ++i) {
                        currentString += pattern;
                        
                        for (int j = 0; j < k; ++j) {
                            if (s[i * k + j] != pattern[j]) {
                                ++diffCount;
                        
                                if (diffCount > 1) break;
                            }
                        }
                        if (diffCount > 1) break;
                    }
                    if ((diffCount == 0 && currentString == s) || (diffCount == 1)) {
                       
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
        }
    }

    return 0;
}
