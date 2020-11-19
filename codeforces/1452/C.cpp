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
	string S;
	cin >> S;
	int R = 0, T = 0, Q = 0;
	for (char c : S) {
		if (c == '(')
			T++;
		if (c == '[')
			Q++;
		if (c == ')') {
			R += (T > 0);
			T = max(0, T-1);
		}
		if (c == ']') {
			R += (Q > 0);
			Q = max(0, Q-1);
		}
	}
	cout << R << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
