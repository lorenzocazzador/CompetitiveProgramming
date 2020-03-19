#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define F first
#define S second

const int MOD = 998244353;

int main() {
    int N, K;
    cin >> N >> K;
    vi A(N);
    for(int & x : A)
        cin >> x;
    vi B;
    ll r1 = 0, r2 = 1;
    for(int i=0; i<N; i++)
        if(A[i] > N-K) {
            r1 += A[i];
            B.emplace_back(i);
        }
    for(int i=1; i<K; i++)
        r2 = (r2 * (B[i] - B[i-1])) % MOD;
    cout << r1 << " " << r2 << "\n";
}