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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b)
        cout << min((a-b)*2LL*x-x, (a-b-1)*y+x);
    else if (a < b)
        cout << min((b-a)*2LL*x+x, (b-a)*y+x);
    else
        cout << x;
}
