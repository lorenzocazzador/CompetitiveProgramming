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
	int N;
	cin >> N;
	vii occ(N+1, {0,0});
	for (int i = 0; i < N; i++) {
		int X;
		cin >> X;
		occ[X].F++;
		occ[X].S = i+1;
	}
	int ans = -1;
	for (int i = 1; i <= N; i++) {
		if (occ[i].F == 1) {
			ans = occ[i].S;
			break;
		}
	}
	cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
