#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define db(x) cerr << #x << ": " << x << "\n";

ll count(vi A, vi B, vi C) {
    ll res = 0;
    for(int & a : A) 
        for(int & b : B) {
            if(b < a) 
                continue;
            int dist = b - a;
            auto it = upper_bound(C.begin(), C.end(), b);
            auto it2 = equal_range(C.begin(), C.end(), b+dist);
            res += distance(it, C.end()) - distance(it2.F, it2.S);
        }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; string s;
    cin >> N >> s;
    vi R, G, B;
    for(int i=0; i<N; i++) {
        if(s[i] == 'R')
            R.emplace_back(i);
        else if(s[i] == 'G')
            G.emplace_back(i);
        else 
            B.emplace_back(i);
    }
    ll cnt = 0;
    cnt += count(R, G, B);
    cnt += count(R, B, G);
    cnt += count(B, R, G);
    cnt += count(B, G, R);
    cnt += count(G, R, B);
    cnt += count(G, B, R);
    cout << cnt << "\n";
}
