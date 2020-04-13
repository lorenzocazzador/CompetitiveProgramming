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

    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vi A(N);
        for(int & x : A) cin >> x;
        vector<int> o(N+1, 0);
        int d = 0, mx = 0;
        for(int i=0; i<N; i++) {
            if(o[A[i]] == 0) d++;
            o[A[i]]++;
            if(o[A[mx]] < o[A[i]]) mx = i;
        }
        int s = o[A[mx]];
        cout << max(min(d-1, s), min(d, s-1)) << '\n';
    }
}
