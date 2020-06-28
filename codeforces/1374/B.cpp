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
    ll N, R = 0;
    cin >> N;
    while(N != 1) {
        if(N % 6 == 0) {
            N /= 6;
        } else {
            if(N < LLONG_MAX / 2LL) {
                N *= 2;
            } else {
                cout << "-1\n";
                return;
            }
        }
        R++;
    }
    cout << R << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
        solve();
}
