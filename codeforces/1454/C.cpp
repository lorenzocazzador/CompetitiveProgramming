#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cout << #x << ": " << x << "\n";

void solve() {
    int N;
    cin >> N;
    vi A(N), occ(N + 1, 0);
    int L = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A[i] = x;
        if ((i > 0 && x != A[i - 1]) || i == 0) {
            occ[x]++;
            L++;
        }
    }
    if (occ[A[0]] == L)
        cout << "0\n";
    else if (occ[A[0]] == 2 && A[0] == A[N - 1])
        cout << "1\n";
    else if (occ[A[0]] == 1 || occ[A[N - 1]] == 0)
        cout << "1\n";
    else {
        int m = INT_MAX;
        for (int i = 1; i <= N; i++)
			if (occ[i] != 0)
            	m = min(m, occ[i] + 1 - (A[0] == i) - (A[N - 1] == i));
        cout << m << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        solve();
}
