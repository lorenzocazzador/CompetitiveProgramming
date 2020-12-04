#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define db(x) cout << #x << ": " << x << "\n";

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll & x : a) cin >> x;

    ll ans = 0;
    for (int i = 1; i < n; i++)
        ans += abs(a[i] - a[i-1]);

    ll diff = max(abs(a[1] - a[0]), abs(a[n-1] - a[n-2]));
    for (int i = 1; i < n-1; i++)
        diff = max(diff, abs(a[i] - a[i-1]) + abs(a[i+1] - a[i]) - abs(a[i+1] - a[i-1]));

    cout << ans - diff << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
