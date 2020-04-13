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
        int n, a, b;
        cin >> n >> a >> b;
        char c = 'a';
        for(int i=0; i<n; i++) {
            if(i%a < b) {
                if(i%a == 0) c = 'a';
                cout << c++;
            } else {
                char d = c - 1;
                cout << d;
            }
        }
        cout << '\n';
    }
}
