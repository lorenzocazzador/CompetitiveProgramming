#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second

bool comp(pair<int,bool> a, pair<int,bool> b) {
    if(a.S == b.S)
        return a.F < b.F;
    else if(a.S)
        return false;
    else 
        return true;
}

int main() {
    int N; 
    cin >> N;
    vi G(N);
    vector<bool> flag(N+1, false);
    for(int & x : G) {
        cin >> x;
        flag[x] = true;
    }
    int P = 0, D = 0;
    for(int i=1; i<=N; i++) 
        if(!flag[i]) {
            if(i % 2) D++;
            else P++;
        }
    vector<pair<int,bool>> UP, UD;
    int Div = 0, last = -1;
    for(int i=0; i<N; i++) {
        if(G[i] != 0) {
            if(i != 0) {
                if(last == -1) {
                    if(G[i] % 2)
                        UD.push_back({i,1});
                    else 
                        UP.push_back({i,1});
                }
                else{
                    if(G[i] % 2 == G[last] % 2) {
                        if(G[last] % 2)
                            UD.push_back({i-last-1,0});
                        else 
                            UP.push_back({i-last-1,0});
                    } else Div++;
                }
            }
            last = i;
        }
    }
    if(last == -1) {
        cout << (N == 1 ? 0 : 1);
        return 0;
    } else if(last != N-1) {
        if(G[last] % 2) 
            UD.push_back({N-1-last,1});
        else
            UP.push_back({N-1-last,1});
    } 
    sort(UP.begin(), UP.end(),comp);
    sort(UD.begin(), UD.end(),comp);
    int res = 0;
    for(pair<int,bool> x : UP) {
        if(P - x.F >= 0)
            P -= x.F;
        else if(x.S)
            res++;
        else
            res += 2;
    }
    for(pair<int,bool> x : UD) {
        if(D - x.F >= 0) 
            D -= x.F;
        else if(x.S)
            res++;
        else
            res += 2;
    }
    cout << res+Div;
}