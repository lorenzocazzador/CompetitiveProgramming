#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define F first
#define S second

int main() {
    int N, W, sum = 0;
    cin >> N >> W;
    vector<pii> O(N);
    for(pii & x : O) {
        cin >> x.F >> x.S;
        sum += x.S;
    }

    vector<long long> dp(sum+1, 10e11);
    dp[0] = 0;   
    for(pii & x : O) 
        for(int i=sum-x.S; i>=0; i--) 
            dp[i+x.S] = min(dp[i+x.S], dp[i] + x.F); 
    
    int res = 0;
    for(int i=0; i<=sum; i++) 
        if(dp[i] <= W) res = max(res, i);

    cout <<  res << "\n";
}