#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cout << #x << ": " << x << "\n";

void solve() {
    ll N;
    cin >> N;
    vi A(N);
    int m = 0, M = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] < A[m])
            m = i;
        M = max(M, A[i]);
    }
    ll t = A[m], R = 0;
    for (int i = 0; i < N; i++) {
        if (i != m) {
            int d = M - A[i];
            if (t > 0 && d > 0) {
                int tmp = d;
                d -= t;
                t -= tmp;
            }
            if (d > 0) R += d;
        }
    }
    if (t > 0 && t % (N-1) != 0) R += N - 1 - (t % (N-1));
    cout << R << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        solve();
}
