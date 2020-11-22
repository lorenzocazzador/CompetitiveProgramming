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

    int N, X;
	cin >> N >> X;
	string S;
	cin >> S;
	for (char c : S) {
		X += (c == 'o' ? 1 : -1);
		X = max(X, 0);
	}
	cout << X << '\n';
}
