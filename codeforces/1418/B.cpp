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
	vi A(N);
	for(int & x : A) cin >> x;
	vi B(N), C;
	for(int i=0; i<N; i++) {
		cin >> B[i];
		if(!B[i]) C.push_back(A[i]);
	}
	sort(C.rbegin(), C.rend());
	for(int i=0, j=0; i<N; i++) {
		if(!B[i])
			cout << C[j++] << ' ';
		else
			cout << A[i] << ' ';
	}
	cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
