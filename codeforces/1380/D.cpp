#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cout << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    ll X, K, Y;
    cin >> X >> K >> Y;
    vi A(N), B(M);
    for(int & x : A) cin >> x;
    for(int & x : B) cin >> x;
    ll ans = 0;
    int j = 0;
    for(int i=0; i<M; i++) {
        int pj = j, mx = 0;
        // TO-DO: check pj = 0
        while(j<N && A[j] != B[i]) {
            if(j != pj) mx = max(mx, A[j]);
            j++;
        }

        if(j == N && A[j-1] != B[i])
            return cout << "-1\n", 0;

        ll d = j - pj - (i != 0);
        //db(d); db(j);
        if(d > 0) {
            int mxl = i != 0 ? max(A[pj], A[j]) : A[j];

            ll pl = 0;

            if(mx > mxl && d < K)
                return cout << "-1", 0;

            if(mx > mxl) {
                if(K*Y < X)
                    pl = X + Y * (d - K);
                else
                    pl = X * (d / K) + Y * (d % K);
            } else {
                if (K*Y < X)
                    pl = d * Y;
                else
                    pl = X * (d / K) + Y * (d % K);
            }
            //db(pl);
            ans += pl;
        }
        //cout << '\n';
    }
    if(j < N) {
        int pj = j, mx = 0;
        // TO-DO: check pj = 0
        while(j<N) {
            if(j != pj) mx = max(mx, A[j]);
            j++;
        }
        ll d = j - pj - 1;
        //db(d); db(j);
        if(d > 0) {
            int mxl = A[pj];

            if(mx > mxl && d < K)
                return cout << "-1", 0;

            if(mx > mxl) {
                if(K*Y < X)
                    ans += X + Y * (d - K);
                else
                    ans += X * (d / K) + Y * (d % K);
            } else {
                if (K*Y < X)
                    ans += d * Y;
                else
                    ans += X * (d / K) + Y * (d % K);
            }

        }
    }
    cout << ans << '\n';
}
