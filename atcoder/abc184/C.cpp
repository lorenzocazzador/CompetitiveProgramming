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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;

	r2 -= r1;
	c2 -= c1;
	if (r2 == 0 && c2 == 0)
		cout << 0 << '\n';
	else if (r2 + c2 == 0 || r2 - c2 == 0 || abs(r2) + abs(c2) <= 3)
		cout << 1 << '\n';
	else if ((r2 + c2) % 2 == 0 || abs(r2 - c2) % 2 == 0)
		cout << 2 << '\n';
	else
		cout << (abs(r2 + c2) <= 3 || abs(r2 - c2) <= 3 ? 2 : 3) << '\n';
}
