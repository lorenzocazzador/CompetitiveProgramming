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
	int N = sz(S);
	vi occ(10, 0);
	int R = N - 2;
	for(char c : S) {
		occ[c-'0']++;
		R = min(R, N - occ[c-'0']);
	}

	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			bool F = true;
			int tmp = 0;
			for(char c : S) {
				if(c-'0' == i && F) {
					tmp++;
					F = false;
				}
				else if(c-'0' == j && !F) {
					tmp++;
					F = true;
				}
			}
			if(tmp % 2) tmp--;

			R = min(R, N-tmp);
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
