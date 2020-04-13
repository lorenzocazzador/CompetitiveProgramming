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
        int N;
        cin >> N;
        vector<int> occ[30];
        int mx = 0;
        for(int i=0; i<N; i++) {
            int x;
            cin >> x;
            occ[x].emplace_back(i);
            mx = max(mx, sz(occ[x]));
        }
        int ans = mx;
        for(int i=1; i<=26; i++) {
            int sz_act = sz(occ[i]);
            for(int x=1; x<=sz_act/2; x++) {
                int left = occ[i][x-1], right = occ[i][sz_act-x];
                for(int j=1; j<=26; j++) {
                    if(i==j || sz(occ[j]) == 0) continue;
                    auto l = lower_bound(occ[j].begin(), occ[j].end(), left),
                         r = lower_bound(occ[j].begin(), occ[j].end(), right);
                    int dist = distance(l,r);
                    ans = max(ans, dist+x*2);
                }
            }
        }
        cout << ans << '\n';
    }
}
