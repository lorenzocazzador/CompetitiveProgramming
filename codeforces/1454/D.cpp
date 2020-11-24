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

void solve() {
	ll n;
	cin >> n;
	ll in = n;
	multiset<ll> A;
	ll M = 0, X;
    for (ll d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            A.insert(d);
			ll T = A.count(d);
			if (T > M) {
				M = T;
				X = d;
			}
            n /= d;
        }
    }
	if (M <= 1)
		cout << "1\n" << in << '\n';
	else {
		ll acc = 1;
		cout << M << '\n';
		for (int i = 0; i < M-1; i++) {
			cout << X << ' ';
			acc *= X;
		}
		cout << in / acc << '\n';
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
