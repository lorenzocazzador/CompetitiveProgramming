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
	ll n, p, k, x, y;
    string s;
    cin >> n >> p >> k >> s >> x >> y;

    ll res = LLONG_MAX;
    vector<ll> dp(n+1, LLONG_MAX);
    for (int i = 1; i <= n; i++) {
        if (i - p >= 0) {
            bool v = (s[i-1] == '0');

            if (i - k >= 1 && dp[i - k] != LLONG_MAX)
                dp[i] = (v ? x : 0) + dp[i - k];

            dp[i] = min(dp[i], (v ? x : 0) + (i-p) * y);

            if (i + k > n)
                res = min(res, dp[i]);
        }
    }

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
