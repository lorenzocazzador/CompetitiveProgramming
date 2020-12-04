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

struct dig {
    int mx = INT_MAX, Mx = 0, my = INT_MAX, My = 0;

    void agg(int x, int y) {
        mx = min(mx, x);
        Mx = max(Mx, x);
        my = min(my, y);
        My = max(My, y);
    }

    void print() {
        cout << mx << " " << Mx << " " << my << " " << My << "\n";
    }
};

void solve() {
    int n;
    cin >> n;
    dig d[10];
    int m[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            m[i][j] = (c - '0');
            d[m[i][j]].agg(j, i);
        }
    }

    vi res(10, 0);
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            int t = m[y][x];

            // h max
            int b = max(y - d[t].my, d[t].My - y);
            int h = max(x, n - 1 - x);
            res[t] = max(res[t], b * h);

            // b max
            b = max(y, n - 1 - y);
            h = max(x - d[t].mx, d[t].Mx - x);
            res[t] = max(res[t], b * h);
        }
    }

    for (int & x : res)
        cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
