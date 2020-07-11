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
        int N;
        cin >> N;
        vi A(N);
        for(int & x : A) cin >> x;
        bool uns = false, r = false, n = false;
        for(int i=0; i<N; i++) {
            if(A[i] != i+1)
                uns = true;
            if(uns && A[i] == i+1)
                r = true;
            if(r && A[i] != i+1)
                n = true;
        }
        if(n)
            cout << "2\n";
        else if(uns)
            cout << "1\n";
        else
            cout << "0\n";
    }
}
