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
	 int n, k;
     cin >> n >> k;
     vi a(n);
     for (int & x : a) cin >> x;
     int res = INT_MAX;
     for (int i = 1; i <= 100; i++) {
         int s = -1, tmp = 0;
         for (int j = 0; j < n; j++) {
             if (s == -1 && a[j] != i) {
                 s = j;
                 tmp++;
             }
             if (j - s + 1 == k)
                s = -1;
         }
         res = min(tmp, res);
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
