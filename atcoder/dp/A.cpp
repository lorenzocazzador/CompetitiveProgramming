#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for(int & x : H)
        cin >> x;
    vector<long long> dp(N, INT_MAX);
    dp[0] = 0;
    for(int i=0; i<N; i++) {
        if(i+1 < N)
            dp[i+1] = min(dp[i+1], dp[i] + abs(H[i]-H[i+1]));
        if(i+2 < N)
            dp[i+2] = min(dp[i+2], dp[i] + abs(H[i]-H[i+2]));
    }
    cout << dp[N-1] << "\n";
}