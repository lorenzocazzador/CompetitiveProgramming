#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define db(x) cerr << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        string s[9];
        for(int i=0; i<9; i++) cin >> s[i];
        for(int i=0, j=0; i<9; i++, j+=3) {
            j = j%9;
            s[i][j+i/3] = (s[i][j+i/3] == '1' ? '2' : '1');
        }       
        for(int i=0; i<9; i++) cout << s[i] << '\n';
    }   
}
