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
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;
	int xi = X, yi = Y;
	while(X != 1) {
		cout << X << ' ' << Y << '\n';
		X--;
	}
	cout << X << ' ' << Y << '\n';
	for(int x = 1; x <= N; x++) {
		if(x % 2) {
			for(int y=M; y>=1; y--)
				if((x <= xi && y != yi) || x > xi)
					cout << x << ' ' << y << '\n';
		} else {
			for(int y=1; y<=M; y++)
				if((x <= xi && y != yi) || x > xi)
					cout << x << ' ' << y << '\n';
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
