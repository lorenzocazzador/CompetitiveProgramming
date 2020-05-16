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

    int N, S;
    cin >> N >> S;
    if(S-(N-1) > N) {
        cout << "YES\n";
        for(int i=0; i<N-1; i++) cout << "1 ";
        cout << S-(N-1) << '\n';
        cout << N << '\n';
    } else cout << "NO\n";
}
