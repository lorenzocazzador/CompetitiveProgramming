#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1010, MOD = 1000000007;
int H, W, memo[MAXN][MAXN];
char G[MAXN][MAXN];

int solve(int r, int c) {
    if(r >= H || c >= W || G[r][c] == '#')
        return 0;
    else if(r == H-1 && c == W-1)
        return 1;
    else if(memo[r][c] != -1)
        return memo[r][c];
    else return memo[r][c] = ((solve(r+1,c) % MOD) + (solve(r,c+1) % MOD)) % MOD;
}

int main() {
    cin >> H >> W;

    for(int i=0; i<H; i++)
        for(int j=0; j<W; j++)
            cin >> G[i][j];

    memset(memo, -1, sizeof memo);
    cout << solve(0,0) << "\n";
}