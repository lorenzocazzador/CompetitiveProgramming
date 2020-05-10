#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cerr << #x << ": " << x << "\n";

int N, M, X;
int L[15][15];
int R[15];

int solve(int ind, int sol) {
    if(ind >= N) {
        bool val = true;
        for(int i=1; i<=M; i++) {
            if(R[i] < X)
                val = false;
        }
        return val ? sol : INT_MAX;
    } else {
        int r1 = solve(ind+1, sol);

        for(int i=1; i<=M; i++)
            R[i] += L[ind][i];
        int r2 = solve(ind+1, sol+L[ind][0]);
        for(int i=1; i<=M; i++)
            R[i] -= L[ind][i];

        return min(r1, r2);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M >> X;

    for(int i=0; i<N; i++) {
        cin >> L[i][0];
        for(int j=1; j<=M; j++)
            cin >> L[i][j];
    }

    int r = solve(0, 0);
    cout << (r == INT_MAX ? -1 : r) << '\n';
}
