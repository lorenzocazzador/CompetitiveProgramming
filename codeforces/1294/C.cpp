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
        int N;
        cin >> N;
        bool found = false, sol = false;
        vi num(3);
        for(int i=2; i*i<=N; i++) {
            if(!found && N % i == 0) {
                N /= i;
                num[0] = i; 
                found = true;
            } else if(N % i == 0 && N/i != i && N/i != num[0]){
                num[1] = i;
                num[2] = N/i;
                sol = true;
            }
        }
        if(sol) cout << "YES\n" << num[0] << " " << num[1] << " " << num[2] << "\n";
        else cout << "NO\n";
    } 
}