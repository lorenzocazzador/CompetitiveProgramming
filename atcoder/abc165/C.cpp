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

struct qu{
    int a,b,c,d;
};

int N, M, Q;
vector<qu> A;
int V[10];

int solve(int ind) {
    if(ind == N) {
        int sc = 0;
        for(qu & x : A) {
            if(V[x.b-1]-V[x.a-1] == x.c) sc += x.d;
        }
        return sc;
    } else {
        int mx = 0;
        for(int i=(ind==0?1:V[ind-1]); i<=M; i++) {
            V[ind] = i;
            mx = max(mx, solve(ind+1));
        }
        return mx;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M >> Q;
    A.resize(Q);
    for(qu & x : A) cin >> x.a >> x.b >> x.c >> x.d;
    cout << solve(0) << '\n';
}
