#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define F first
#define S second

bool isPal(string & s) {
    int i = 0, f = (int)s.size();
    f--;
    while(i<f)
        if(s[i] != s[f])
            return false;
        else
            i++, f--;
    return true;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        int N = (int)s.size();
        vector<pii> pals;
        // find odd palindromes
        for(int i=0; i<N; i++) {
            int j = 1;
            while(i-j >= 0 && j+i < N && s[i-j] == s[i+j]) j++;
            j--;
            pals.push_back({i-j, 2*j+1});
        }

        // find even palindromes
        for(int i=0; i<N-1; i++) {
            int ii = i+1, j = 0;
            while(i-j >= 0 && ii+j < N && s[i-j] == s[ii+j]) j++;
            j--;
            if(j != -1)
                pals.push_back({i-j, 2*j+2});
        }
        string res = "";
        for(pii & p : pals) {
            int i = p.F, f = N-(p.F+p.S);
            if(i == 0 || f == 0) {
                string t = s.substr(p.F, p.S);
                if((int)t.size() > (int)res.size()) res = t;
            } else {
                string t = "";
                for(int x=0; x<min(i,f); x++) t += s[x];
                t += s.substr(p.F, p.S);
                for(int x=N-min(i,f); x<N; x++) t += s[x];
                if(isPal(t) && (int)t.size() > (int)res.size()) res = t;
            } 
        }
        cout << res << "\n";
    }
}