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
        int N; string S;
        cin >> N >> S;
        int B = 0, R = 0;
        for(char c : S)  {
            if(c == '(')
                B++;
            else
                B--;
            if(B < 0 && c == ')') {
                R++;
                B = 0;
            }
        }
        cout << R << '\n';
    }
}
