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
	int N, Q;
	cin >> N >> Q;
	string S;
	cin >> S;
	while (Q--) {
		int L, R;
		cin >> L >> R;
		L--, R--;
		bool A = 0;
		for (int i = L-1; i >= 0; i--)
			A |= S[i] == S[L];
		for (int i = R+1; i < N; i++)
			A |= S[i] == S[R];
		cout << (A ? "YES" : "NO") << '\n';
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
