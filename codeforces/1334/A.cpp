#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define F first
#define S second

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        pii p;
        bool ans = true;
        for(int i=0; i<N; i++) {
            pii a;
            cin >> a.F >> a.S;
            if(a.S > a.F) ans = false;
            else if(i > 0 && (a.F < p.F || a.S < p.S || a.F-p.F<a.S-p.S)) ans = false;
            p = a;
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
}
