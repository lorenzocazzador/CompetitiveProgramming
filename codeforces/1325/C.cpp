#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define F first
#define S second

const int MAXN = 100010;
vi adj[MAXN];
map<pii,int> res;

int main() {
    int N;
    cin >> N;
    vector<pii> E(N-1);
    for(pii & x : E) {
        cin >> x.F >> x.S; 
        adj[x.F].emplace_back(x.S);
        adj[x.S].emplace_back(x.F);
    }

    int prog = 0;
    for(int i=1; i<=N; i++) 
        if(adj[i].size() >= 3) {
            for(int & x : adj[i])
                res[{i,x}] = prog++;
            break;
        }

    for(pii & x : E) 
        cout << (res.count(x) ? res[x] : (res.count({x.S,x.F}) ? res[{x.S,x.F}] : prog++)) << "\n";
}