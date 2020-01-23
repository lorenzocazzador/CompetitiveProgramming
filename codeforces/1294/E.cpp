#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second

int main() {
    int N, M;
    cin >> N >> M;
    int A[N][M];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> A[i][j];

    int res = 0;
    for(int c=0; c<M; c++) {
        // For each column
        vi cnt(N, 0);
        int res_tmp = INT_MAX;
        for(int r=0; r<N; r++) {
            if( (A[r][c]-1) % M != c || A[r][c] > N*M )
                continue;
            int rF = (A[r][c]-1) / M;
            cnt[(r - rF + N)%N]++; 
        }
        for(int i=0; i<N; i++)
            res_tmp = min(res_tmp, i + N - cnt[i]);
        res += res_tmp;
    }
    cout << res << "\n";
}