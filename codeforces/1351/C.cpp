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
        string S;
        cin >> S;
        set<pair<pii,pii>> v;
        pii p = {0,0};
        int res = 0;
        for(char & x : S) {
            pii n = p;
            if(x == 'N')
                n.S++;
            else if(x == 'S')
                n.S--;
            else if(x == 'E')
                n.F--;
            else
                n.F++;
            if(v.count({p,n}) || v.count({n,p}))
                res++;
            else {
                v.insert({p,n});
                res += 5;
            }
            p = n;
        }
        cout << res << '\n';
    }
}
