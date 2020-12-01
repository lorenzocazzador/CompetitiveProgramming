#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define db(x) cout << #x << ": " << x << "\n";

void solve() {
    vii p(4);
    vi x(4), y(4);
    for (int i = 0; i < 4; i++) {
        cin >> x[i] >> y[i];
        p[i] = {x[i], y[i]};
    }

    sort(all(x));
    sort(all(y));
    // compute the square's side, we don't want to compress the square more than necessary
    int l = max(x[2]-x[1], y[2]-y[1]);

    vii s(4);
    // compute the bottom-left point of the square
    s[0] = {min(x[3]-l, x[1]), min(y[3]-l, y[1])};
    s[1] = {s[0].F, s[0].S + l};
    s[2] = {s[0].F + l, s[0].S};
    s[3] = {s[0].F + l, s[0].S + l};

    ll res = LLONG_MAX;
    vi perm = {0, 1, 2, 3};
    do {
        ll tmp_res = 0;
        for (int i = 0; i < 4; i++)
            tmp_res += abs(s[i].F - p[perm[i]].F) + abs(s[i].S - p[perm[i]].S);
        res = min(res, tmp_res);
    } while (next_permutation(all(perm)));
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
