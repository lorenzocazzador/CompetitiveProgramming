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

    int K, A, B;
    cin >> K >> A >> B;
    for(int i=A; i<=B; i++)
        if(i % K == 0)
            return cout << "OK\n", 0;
    cout << "NG\n";
}
