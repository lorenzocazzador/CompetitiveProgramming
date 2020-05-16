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

pii minMax(ll N) {
    ll m = 9, M = 0;
    while(N) {
        m = min(m, N%10);
        M = max(M, N%10);
        N /= 10LL;
    }
    return {m,M};
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        ll A, K;
        cin >> A >> K;
        pii M = minMax(A);
        K--;
        while(K-- && M.F && M.S) {
            A += ll(M.F * M.S);
            M = minMax(A);
        }
        cout << A << '\n';
    }
}
