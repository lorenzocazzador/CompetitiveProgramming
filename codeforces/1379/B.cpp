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

void solve() {
    ll L, R, M;
    cin >> L >> R >> M;
    for(ll a=L; a<=R; a++) {
        ll r = M % a, r1 = a - r;
        if(R-L >= r && M - r != 0) {
            cout << a << ' ' << L+r << ' ' << L << '\n';
            return;
        }
        if(R-L >= r1) {
            cout << a << ' ' << L << ' ' << L+r1 << '\n';
            return;
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
