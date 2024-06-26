#include<bits/stdc++.h>
using namespace std;

int maxSubsequence(int N, vector<int> A, int K) {
    int ans = 0;
    for (int k = 0; k < K; k++) {
        int cnt = 0;
        int t = A[0];
        for (int i = 1; i < N; i++) {
            if ((A[i] + t) % K == k) {
                cnt++;
                t = A[i];
            }
        }
        ans = max(ans, cnt);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int K;
        cin >> K;
        int out = maxSubsequence(N, A, K);
        cout << out << endl;
    }
    return 0;
}