#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define F first
#define S second

int main() {
    int N, W;
    cin >> N >> W;
    vector<pii> O(N);
    for(pii & x : O)
        cin >> x.F >> x.S;
    vector<long long> dp(W+1, 0);
    for(pii & x : O) 
        for(int w=W; w-x.F>=0; w--)
            dp[w] = max(dp[w], dp[w-x.F]+x.S); 
    cout << dp[W];
}