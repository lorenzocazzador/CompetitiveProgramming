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
        vi A(N), B(N);
        int m = 0, p = 0;
        for(int & x : A) {
            cin >> x;
            if(x==1) p++;
            else if(x==-1) m++;
        }
        for(int & x : B) cin >> x;
        set<int> s; bool ans = true;
        for(int i=N-1; i>=0; i--) {
            int x = A[i], d = B[i] - x;
            if(x==1) p--;
            else if(x==-1) m--;
            
            if(d > 0 && p == 0) ans = false;
            else if(d < 0 && m == 0) ans = false;
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
}