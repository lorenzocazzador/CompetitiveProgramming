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
	int N, K;
	cin >> N >> K;
	string A, B;
	cin >> A >> B;
	vi occA(26, 0), occB(26, 0);
	for (int i = 0; i < N; i++) {
		occA[A[i] - 'a']++;
		occB[B[i] - 'a']++;
	}
	bool can = true;
	for (int i = 0; i < 26 && can; i++) {
		if (occA[i] > 0) {
			int tmp = occB[i];
			occB[i] = max(0, occB[i] - occA[i]);
			occA[i] = max(0, occA[i] - tmp);
		}
		for (int j = i-1; j >= 0 && occB[i] > 0; j--) {
			if(occA[j] > 0 && occA[j] >= K) {
				int need = (occB[i] / K) * K;
				int used = min(need, (occA[j] / K) * K);
				occB[i] = max(0, occB[i] - used);
				occA[j] = max(0, occA[j] - used);
			}
		}
		if (occB[i] > 0) can = false;

	}
	cout << (can ? "Yes" : "No") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	int T;
    cin >> T;
    while(T--) solve();
}
