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

    int N; ll K;
    cin >> N >> K;
    vi A(N);
    for(int & x : A) cin >> x;
    int p = 1, I = 1, off = 0;
    vector<int> vis(N, -1);
    for(int i=0; i<N; i++) {
        if(vis[p-1] != -1) {
            off = vis[p-1];
            I = p;
            break;
        } else {
            vis[p-1] = i;
            p = A[p-1];
        }
        if(i+1 == K) {
            cout << p << '\n';
            return 0;
        }
    }
    vi P;
    P.emplace_back(I);
    while(A[I-1] != P[0]) {
        I = A[I-1];
        P.emplace_back(I);
    }

    //for(int & x : P ) cout << x << ' '; cout << endl;
    cout << P[(K-off)%sz(P)] << endl;
}
