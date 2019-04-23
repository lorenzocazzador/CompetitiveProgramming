#include <bits/stdc++.h>
using namespace std;

const int MAXN = 500000;
long long DP[MAXN][3];
/// DP[i][0] --> non aver ancora moltiplicato per X
/// DP[i][1] --> moltiplicare per X il seguente sub-array
/// DP[i][2] --> aver già moltiplicato per X un sub-array


int main(){
    int N;
    long long X, ans = 0;
    cin >> N >> X;

    for(int i=1; i<=N; i++){
        long long A;
        cin >> A;
        DP[i][0] = max(DP[i-1][0] + A, A);
        DP[i][1] = max({DP[i-1][0] + A*X, DP[i-1][1] + A*X, A*X});
        DP[i][2] = max({DP[i-1][1] + A, DP[i-1][2] + A, A});
        for(int j=0; j<2; j++) DP[i][j] = max(DP[i][j], 0LL);
        ans = max({ans, DP[i][0], DP[i][1], DP[i][2]});
    }

    cout << ans << "\n";
}
