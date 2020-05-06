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
        ll i = 1, hi = 2, res = 0;
        while(N >= 2) {
            int new_hi = hi + (i+1)*2 + i;
            if(N - new_hi < 0) {
                N -= hi;
                hi = 2;
                i = 1;
                res++;
            } else {
                hi = new_hi;
                i++;
            }
        }
        cout << res << '\n';
    }
}
