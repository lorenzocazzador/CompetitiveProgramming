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
        int a = 0, b = 0;
        for(int i=2; i*i<=N; i++) {
            if(N % i == 0) {
                a = N/i;
                b = N - a;
                break;
            }
        }
        if(a) cout << a << ' ' << b << '\n';
        else cout << N-1 << ' ' << 1 << '\n';
    }
}
