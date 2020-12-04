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
	int n, m, t;
    cin >> n >> m;
    set<int> x;
    for(int i = 0; i < n; i++) {
        cin >> t;
        x.insert(t);
    }
    for(int i=0; i < m; i++) {
        cin >> t;
        x.insert(t);
    }
    cout << n + m - sz(x) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
