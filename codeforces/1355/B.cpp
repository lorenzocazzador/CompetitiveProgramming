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

int N, E[200010];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        cin >> N;
        for(int i=0; i<N; i++) cin >> E[i];
        sort(E, E+N);
        int g = 0, sz = 0, mx = 0;
        for(int i=0; i<N; i++) {
            sz++;
            mx = max(mx, E[i]);

            if(sz >= mx) {
                g++;
                sz = mx = 0;
            }
        }
        cout << g << '\n';
    }
}
