#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100010;
vector<int> adj[MAXN];
int dist[MAXN];

int dfs(int s) {
    if(dist[s] != -1)
        return dist[s];

    int max_dist = 0;
    for(int & x : adj[s]) 
        max_dist = max(max_dist, 1+dfs(x));
    return dist[s] = max_dist;
}

int main() {
    int N, M;
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    memset(dist, -1, sizeof dist);
    int res = 0;
    for(int i=1; i<=N; i++)
        res = max(res, dfs(i));
    cout << res << "\n";
}