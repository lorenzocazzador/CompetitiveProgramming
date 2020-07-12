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
        int N, X;
        cin >> N >> X;
        vi A(N);
        for(int & x : A) cin >> x;
        sort(A.begin(), A.end(), greater<int>());
        int ans = 0, t = 1;
        for(int & x : A) {
            if(t * x >= X) {
                ans++;
                t = 1;
            } else t++;
        }
        cout << ans << '\n';
    }
}
