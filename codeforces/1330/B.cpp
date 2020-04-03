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
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        vi A(N);
        vector<int> O(N, 0);
        for(int & x : A) {
            cin >> x;
            O[x]++;
        }
        bool ans = true, f = false, f2 = false;
        int s = 0;
        for(int i=1; i<N; i++) {
            //cout << O[i] << " ";
            if(f2 && O[i] > 0) ans = false;

            if(O[i] == 2) {
                if(f) ans = false;
                else s++;
            } else if(O[i] == 1)
                f = true;
            else if(O[i] == 0)
                f2 = true; 
            else if(O[i] > 2) ans = false;

        }
        if(!ans) {
            cout << "0\n";
            continue;
        }
        int res = 0, l1 = s, l2 = N - s; 
        vector<bool> C(N, false);
        for(int i=0; i<l1; i++) C[A[i]] = true;
        bool v = true;
        for(int i=1; i<=l1; i++) if(!C[i]) v = false;
        if(v) res++;
        if(l1 != l2) {
            C.clear(); C.resize(N, false);
            for(int i=0; i<l1; i++) C[A[N-1-i]] = true;
            v = true;
            for(int i=1; i<=l1; i++) if(!C[i]) v = false;
            if(v) res+=2;
        }
        if(res == 0 || l1 == 0 || l2 == 0) cout << "0\n";
        else if(res == 1) cout << "1\n" << l1 << " " << l2 << "\n";
        else if(res == 2) cout << "1\n" << l2 << " " << l1 << "\n";
        else if(res == 3) cout << "2\n" << l1 << " " << l2 << "\n" << l2 << " " << l1 << "\n";
    }
}