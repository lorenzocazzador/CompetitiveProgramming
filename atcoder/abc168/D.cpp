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

    int N, M;
    cin >> N >> M;
    vi A[N+1];
    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        A[x].emplace_back(y);
        A[y].emplace_back(x);
    }
    queue<pii> q;
    vi R(N+1,-1);
    q.push({1,0});
    while(!q.empty()) {
        pii act = q.front(); q.pop();
        if(R[act.F] != -1)
            continue;
        R[act.F] = act.S;
        for(int & x : A[act.F])
            q.push({x, act.F});
    }
    cout << "Yes\n";
    for(int i=2; i<=N; i++)
        cout << R[i] << '\n';
}
