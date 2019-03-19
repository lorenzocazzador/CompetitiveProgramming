#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
#define F first
#define S second

const int MAXN = 100, MAXW = 10e5 + 10;
ll dp[MAXN][MAXW];

int main(){
    int N, W;
    cin >> N >> W;

    vector<pii> obj(N);

    for(int i=0; i<N; i++) cin >> obj[i].F >> obj[i].S;

    /// initialize the table
    for(int j=0; j<=W; j++) dp[0][j] = (j >= obj[0].F) ? obj[0].S : 0;

    for(int i=1; i<N; i++){
        for(int j=0; j<=W; j++){
            if(j < obj[i].F) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-obj[i].F] + obj[i].S);
        }
    }

    cout << dp[N-1][W] << "\n";
}