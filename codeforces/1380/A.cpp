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

void solve() {
    int N;
    cin >> N;
    vi A(N);
    for(int & x : A) cin >> x;
    int mn = 0;
    for(int z=1; z<N; z++) {
        if(A[mn] < A[z]) {
            for(int f=z+1; f<N; f++)
                if(A[f] < A[z]) {
                    cout << "YES\n" << mn+1 << ' ' << z+1 << ' ' << f+1 << '\n';
                    return;
                }
        }
        if(A[mn] > A[z])
            mn = z;
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
        solve();
}
