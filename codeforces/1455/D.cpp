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
    int n, x;
    cin >> n >> x;
    vi a(n);
    for (int & x : a) cin >> x;
    bool s = is_sorted(a.begin(), a.end());
    int i = 0, r = 0;
    while (!s && i < n) {
        while (a[i] <= x) i++;
        if (i < n)
            swap(a[i], x);
        r++;
        s = is_sorted(a.begin(), a.end());
    }
    cout << (s ? r : -1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
