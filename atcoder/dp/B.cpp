#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> H(N);
    for(int & x : H)
        cin >> x;
    vector<long long> dp(N, INT_MAX);
    dp[0] = 0;
    for(int i=0; i<N; i++) {
        for(int k=1; k<=K && i+k<N; k++) 
            dp[i+k] = min(dp[i+k], dp[i] + abs(H[i]-H[i+k]));
    }
    cout << dp[N-1] << "\n";
}