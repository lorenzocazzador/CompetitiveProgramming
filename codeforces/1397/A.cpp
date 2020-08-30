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
	vector<string> A(N);
	for(string & x : A) cin >> x;
	vi O(26,0);
	for(string & x : A)
		for(char c : x)
			O[c-'a']++;

	bool ans = true;
	for(int i=0; i<26; i++)
		ans &= (O[i] % N == 0);
	cout << (ans ? "YES" : "NO") << '\n';
	return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
