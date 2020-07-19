#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cout << #x << ": " << x << "\n";

void solve() {
    int N;
    string S, T = "abacaba";
    cin >> N >> S;
    int O = 0;
    for(int i=0; i<sz(S); i++) {
        if(S[i] == 'a') {
            bool v = true;
            int j;
            for(j=1; j<sz(T) && i+j<sz(S); j++) {
                if(S[i+j] != T[j]) {
                    v = false;
                    break;
                }
            }
            if(v && j==sz(T)) O++;
        }
    }
    if(O == 1) {
        cout << "Yes\n";
        for(char c : S) {
            if(c == '?') cout << 'd';
            else cout << c;
        }
        cout << '\n';
        return;
    } else if(O > 1) {
        cout << "No\n";
        return;
    }

    for(int i=0; i<sz(S); i++) {
        if(S[i] == 'a' || S[i] == '?') {
            bool v = true;
            int j;
            for(j=0; j<sz(T) && i+j<sz(S); j++) {
                if(S[i+j] != '?' && S[i+j] != T[j]) {
                    v = false;
                    break;
                }
            }
            if(v && j==sz(T)) {
                string F = S.substr(0,i) + "abacaba" + S.substr(i+7);
                int E = 0;
                for(int g=0; g<sz(F); g++) {
                    if(F[g] == 'a') {
                        bool x = true;
                        int y;
                        for(y=1; y<sz(T) && g+y<sz(F); y++) {
                            if(F[g+y] != T[y]) {
                                x = false;
                                break;
                            }
                        }
                        if(x && y==sz(T)) E++;
                    }
                }
                v = (E == 1);
            }
            if(v && j==sz(T)) {
                cout << "Yes\n";
                for(int j=0; j<sz(S); j++) {
                    if(j == i) {
                        cout << T;
                        j += 6;
                    } else if(S[j] == '?') cout << 'd';
                    else cout << S[j];
                }
                cout << '\n';
                return;
            }
        }
    }
    cout << "No\n";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();
}
