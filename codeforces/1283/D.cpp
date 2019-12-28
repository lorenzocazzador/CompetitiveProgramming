#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define F first
#define S second

string to_string(bool b) {
    return b ? "true" : "false";
}

template<typename A, typename B>
string to_string(pair<A, B> p) {
    return "{" + to_string(p.F) + "," + to_string(p.S) + "}";
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> x(N);
    for(int & t : x)
        cin >> t;

    sort(x.begin(), x.end());
    priority_queue<pair<pii,pair<int,bool>>> pq;
    for(int i=0; i<N; i++) {
        pii sx, dx;
        if(i == 0)
            sx = {0, INT_MAX};
        else {
            int t = (x[i] - x[i-1] - 1) / 2 + (x[i] - x[i-1] - 1) % 2;
            sx = {0, t};
        }
        if(i == N-1)
            dx = {0, INT_MAX};
        else {
            int t = (x[i+1] - x[i] - 1) / 2;
            dx = {0, t};
        }
        if(sx.S > 0)
            pq.push({sx,{x[i],true}});
        if(dx.S > 0)
            pq.push({dx,{x[i],false}});
    }

    /*while(!pq.empty()) {
        pair<pii,pair<int,bool>> tmp = pq.top(); pq.pop();
        cout << to_string(tmp) << "\n";
    }*/

    long long res = 0;
    vector<int> R;
    for(int i=0; i<M; i++) {
        pair<pii,pair<int,bool>> tmp = pq.top(); pq.pop();

        int n = -tmp.F.F + 1;
        res += n;

        int p;
        if(tmp.S.S) 
            p = tmp.S.F - n;
        else 
            p = tmp.S.F + n;
        R.push_back(p);

        if(n < tmp.F.S)
            pq.push({{-n,tmp.F.S},tmp.S});
    }

    cout << res << "\n";
    for(int & t : R)
        cout << t << " ";
    cout << "\n";
}