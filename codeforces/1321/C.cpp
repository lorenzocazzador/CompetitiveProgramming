#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string s;
    cin >> N >> s;
    int res = 0; bool op = true;
    while(op) {
        op = false;
        int mx = -1, ind = -1;
        for(int x=0; x<(int)s.size(); x++) {
            if(s[x] == 'a') continue;
            bool sx = x != 0 && s[x-1] == s[x] - 1,
                 dx = x != N-1 && s[x+1] == s[x] - 1;
            if((sx || dx) && (s[x]-'a') > mx) {
                mx = s[x] - 'a';
                ind = x;
            }
        }
        if(ind != -1) {
            op = true;
            res++;
            s = s.substr(0,ind) + (ind+1 < (int)s.size() ? s.substr(ind+1) : "");
        }
    }
    cout << res << "\n";
}