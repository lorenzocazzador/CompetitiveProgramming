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
    int T;
    cin >> T;
    while(T--) {
    	int N, X;
    	cin >> N >> X;
    	vi A(N);
    	for(int & x : A) cin >> x;
    	vector<bool> C(210, false);
    	for(int i=0; i<N; i++) 
    		C[A[i]] = true;
    	int i = 0;
    	while(i<210) {
			if(!C[++i]) {
				if(X) X--;
				else break;
			}
		}
    	cout << i-1 << "\n";
    }
}