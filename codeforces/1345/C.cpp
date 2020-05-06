#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cerr << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        ll N;
        cin >> N;
        vector<ll> A(N);
        for(ll & x : A) cin >> x;
        set<ll> S;
        for(int i=0; i<N; i++)
            S.insert((N + (i+A[i])%N) % N);
        cout << (sz(S) == N ? "YES\n" : "NO\n");
    }
}
