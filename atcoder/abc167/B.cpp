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

    ll A, B, C, K;
    cin >> A >> B >> C >> K;
    if(A+B >= K)
        cout << min(A,K) << '\n';
    else
        cout << A-(K-A-B) << '\n';
}
