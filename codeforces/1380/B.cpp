#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cerr << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        string S;
        cin >> S;
        int r = 0, s = 0, p = 0;
        for(char c : S) {
            if(c == 'R') r++;
            else if(c == 'S') s++;
            else p++;
        }
        if(max({r,s,p}) == r) cout << string(S.size(), 'P') << '\n';
        else if(max({r,s,p}) == s) cout << string(S.size(), 'R') << '\n';
        else cout << string(S.size(), 'S') << '\n';
    }
}
