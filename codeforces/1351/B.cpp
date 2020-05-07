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
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if((a1 + a2 == b1 && b1 == b2) || (a1 + b2 == a2 && a2 == b1) || (a2 + b1 == a1 && a1 == b2) || (b1 + b2 == a1 && a1 == a2))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
