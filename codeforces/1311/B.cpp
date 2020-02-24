#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define F first
#define S second

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, M;
        cin >> N >> M;
        vector<int> a(N), b(N);
        set<int> p;
        for(int i=0; i<N; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        vector<pii> pos(101, {INT_MAX, INT_MIN});
        for(int i=0; i<N; i++)
            pos[b[i]] = {min(i, pos[b[i]].F), max(i,pos[b[i]].S)};

        while(M--) {
            int x;
            cin >> x;
            x--;
            p.insert(x);
        }
        bool sol = true;
        for(int i=0; i<N && sol; i++) {
            if(pos[a[i]].F > i) {
                for(int j=i; j<pos[a[i]].F && sol; j++)
                    if(p.count(j) == 0) 
                        sol = false;
            } else if(i > pos[a[i]].S) {
                for(int j=pos[a[i]].S; j<i && sol; j++)  
                    if(p.count(j) == 0) 
                        sol = false;
            }
        }
        cout << (sol ? "YES\n" : "NO\n");
    }
}