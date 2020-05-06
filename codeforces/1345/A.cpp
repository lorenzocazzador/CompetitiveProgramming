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
        int N, M;
        cin >> N >> M;
        if(N == 1 || M == 1 || (N == 2 && M == 2))  
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}
