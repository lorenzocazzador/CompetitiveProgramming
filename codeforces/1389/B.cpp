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
	int N, K, Z;
	cin >> N >> K >> Z;
	vi A(N);
	for(int & x : A) cin >> x;
	vi pref(N+1, 0);
	for(int i=0; i<N; i++) pref[i+1] = pref[i] + A[i];
	int S = 0, ans = 0;
	for(int i=0; i<K+1; i++) {
		S += A[i];
		if(i > 0 && Z > 0) {
			int L = min(Z, (K-i)/2 + (K-i)%2);
			//if(i == 2) db(L);
			int R = S + L * A[i-1];

			if(Z < (K-i)/2 + (K-i)%2)
				R += A[i] * L;
			else
				R += A[i] * ((K-i)%2 ? L-1 : L);

			int F = K-i-L*2;
			if(F > 0)
				R += pref[i+F+1] - pref[i+1];
			ans = max(ans, R);
		}
	}
	cout << max(S, ans) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
