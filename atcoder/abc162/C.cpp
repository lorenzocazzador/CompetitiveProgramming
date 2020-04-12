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

    int K;
    cin >> K;
    ll ans = 0;
    for(int i=1; i<=K; i++)
        for(int j=1; j<=K; j++)
            for(int z=1; z<=K; z++)
                ans += __gcd(i,__gcd(j,z));
    cout << ans << '\n';
}
