#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define F first
#define S second

vector<vector<int>> adj;
vector<int> p;

pii dfs(int s, int prec = -1, int dist = 0) {
    p[s] = prec;
    pii res = {dist, s};
    for(int & x : adj[s]) {
        if(x == prec) continue;
        res = max(res, dfs(x, s, dist + 1));
    }
    return res;
}

int main() {
    int N;
    cin >> N;
    adj.resize(N+1);
    p.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }

    pii a = dfs(1);
    pii b = dfs(a.S);
    vector<int> diam;

    int v = b.S;
    while(a.S != v) {
        diam.push_back(v);
        v = p[v];
    }
    diam.push_back(a.S);
    
    if(diam.size() == N) {
        cout << N-1 << "\n" << diam[0] << " " << diam[1] << " " << diam.back() << "\n";
    } else {
        queue<int> q;
        vector<int> dist(N+1, -1);

        for(int & x : diam) {
            q.push(x);
            dist[x] = 0;
        }

        while(!q.empty()) {
            int act = q.front(); q.pop();
            for(int & x : adj[act]) {
                if(dist[x] == -1) {
                    dist[x] = dist[act] + 1;
                    q.push(x);
                }
            }
        }

        int c, max_dist = 0;
        for(int i=1; i<N+1; i++) 
            if(dist[i] > max_dist) {
                max_dist = dist[i];
                c = i;
            }

        cout << diam.size() - 1 + dist[c] << "\n" << diam[0] << " " << diam.back() << " " << c << "\n";
    }
}