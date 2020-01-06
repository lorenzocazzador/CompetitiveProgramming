#include <bits/stdc++.h>
using namespace std;

const int MAXN = 110;
int N, P[MAXN], dp[MAXN][MAXN][MAXN][2];

int f(int i, int p, int d, int l) {
    if(i >= N)
        return 0;
    if(dp[i][p][d][l] != -1)
        return dp[i][p][d][l];
    if(P[i]) {
        int ans = f(i+1, p, d, P[i]%2);
        if(l != P[i]%2) ans++;
        return dp[i][p][d][l] = ans;
    } else {
        int ans = INT_MAX;
        if(p) ans = min(ans, f(i+1, p-1, d, 0) + (l != 0));
        if(d) ans = min(ans, f(i+1, p, d-1, 1) + (l != 1));
        return dp[i][p][d][l] = ans;
    }
}

int main() {
    cin >> N;
    int p = N/2, d = (N+1)/2;
    for(int i=0; i<N; i++) {
        cin >> P[i];
        if(P[i] && P[i]%2) d--;
        else if(P[i]) p--;
    }
    memset(dp, -1, sizeof dp);
    cout << min(f(0,p,d,0),f(0,p,d,1)) << "\n";
}