#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    bool M[H][W];
    for(int i=0; i<H; i++)
        for(int j=0; j<W; j++) {
            char c;
            cin >> c;
            M[i][j] = (c == '#');
        }
    vector<vector<int>> dp(H, vector<int>(W, INT_MAX));
    dp[0][0] = M[0][0];
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(i+1 < H) dp[i+1][j] = min(dp[i+1][j], dp[i][j] + (M[i+1][j] && !M[i][j]));
            if(j+1 < W) dp[i][j+1] = min(dp[i][j+1], dp[i][j] + (M[i][j+1] && !M[i][j]));
        }
    }
    cout << dp[H-1][W-1] << "\n";
}