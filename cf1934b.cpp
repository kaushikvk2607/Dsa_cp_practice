#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

int minCoins(int n) {
    vector<int> coins = {1, 3, 6, 10, 15};
    int m = coins.size();

    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    return dp[n];
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res = minCoins(n);
        cout<<res<<endl;
    }
    return 0;
}