#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second

int main() {
    int T;
    cin >> T;
    while(T--) {
        ll A[3], N;
        cin >> A[0] >> A[1] >> A[2] >> N;
        sort(A, A+3);
        ll P = A[2] - A[0] + A[2] - A[1];
        if(P <= N && (N-P) % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}