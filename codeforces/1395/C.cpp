#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cout << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
	cin >> N >> M;
	vi A(N), B(M), C(N);
	for(int & x : A) cin >> x;
	for(int & x : B) cin >> x;

	for(int i=0; i<(1<<9); i++) {
        bool valid = true;
        for(int & x : A) {
            bool v = false;
            for(int & y : B)
                if(!v) v = ((x&y)|i) == i;
            if(!v) {
                valid = false;
                break;
            }
        }
        if(valid)
            return cout << i << '\n', 0;
    }
}
