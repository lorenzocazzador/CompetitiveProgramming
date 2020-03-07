#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; int Q;
    cin >> s >> Q;
    bool r = false;
    string pref = "", suff = "";
    while(Q--) {
        int T;
        cin >> T;
        if(T == 1)
            r = !r;
        else {
            int F; char C;
            cin >> F >> C;
            if((F == 1 && !r) || (F == 2 && r))
                pref += C;
            else 
                suff += C;
        }
    }
    reverse(pref.begin(), pref.end());
    string res = pref + s + suff;
    if(r) reverse(res.begin(), res.end()); 
    cout << res << "\n";
}