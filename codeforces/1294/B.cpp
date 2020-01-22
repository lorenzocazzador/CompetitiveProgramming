#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second

string getPath(int r, int u) {
    string p = "";
    while(r--) p += "R";
    while(u--) p += "U";
    return p;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<pair<int, pii>> P(N);
        for(pair<int,pii> & x : P) {
            cin >> x.S.F >> x.S.S;
            x.F = x.S.F + x.S.S;
        }    
        sort(P.begin(), P.end());
        pii pos = {0,0};
        bool sol = true;
        string path = "";
        for(auto & x : P) {
            if(x.S.F < pos.F || x.S.S < pos.S) {
                sol = false;
                break;
            } 
            path += getPath(x.S.F-pos.F, x.S.S-pos.S);
            pos = x.S;
        }
        if(!sol) cout << "NO\n";
        else cout << "YES\n" << path << "\n";
    }
}