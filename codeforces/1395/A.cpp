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

int solve() {
	ll r ,g, b, w;
	cin >> r >> g >> b >> w;
	ll sum = r + g + b + w;
	int c = 50;
	while(r && g && b && c) {
		if(sum % 2 == 0) {
			if(r % 2 == 0 && g % 2 == 0 && b % 2 == 0 && w % 2 == 0)
				return cout << "Yes\n", 0;
		} else {
			if((r % 2 + g % 2 + b % 2 + w % 2) == 1)
				return cout << "Yes\n", 0;
		}
		r--, g--, b--, c--;
		w += 3;
	}
	if(sum % 2 == 0) {
		if(r % 2 == 0 && g % 2 == 0 && b % 2 == 0 && w % 2 == 0)
			return cout << "Yes\n", 0;
	} else {
		if((r % 2 + g % 2 + b % 2 + w % 2) == 1)
			return cout << "Yes\n", 0;
	}
	return cout << "No\n", 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
