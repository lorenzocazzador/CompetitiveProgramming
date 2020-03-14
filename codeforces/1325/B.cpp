#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define F first
#define S second

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        unordered_set<int> s;
        int res = 0;
        for(int i=0; i<N; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << (int)s.size() << "\n";
    }
}