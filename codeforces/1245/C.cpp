#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    string s;
    cin >> s;

    for(char c : s)
        if(c == 'w' || c == 'm')
            return cout << "0", 0;

    int N = s.size();
    vector<int> dp(N+1);

    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<=N; i++) {
        if((s[i-1] == 'u' && s[i-2] == 'u') || (s[i-1] == 'n' && s[i-2] == 'n'))
            dp[i] = (dp[i-1] + dp[i-2]) % MOD;
        else
            dp[i] = dp[i-1];
    }

    cout << dp[N];
}
