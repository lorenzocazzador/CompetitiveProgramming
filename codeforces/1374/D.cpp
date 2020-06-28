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
        int N, K;
        ll R = 0;
        cin >> N >> K;
        map<int,int> M;
        for(int i=0; i<N; i++) {
            int x;
            cin >> x;
            int d = K-(x%K), t = ++M[d];
            if(d != K)
                R = max(R, ll(t-1)*ll(K)+ll(d));
        }
        if(R > 0) R++;
        cout << R << '\n';
    }
}
