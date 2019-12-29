#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N, K1, K2;
        string res = "YES";
        cin >> N >> K1 >> K2;

        for(int i=0; i<K1+K2; i++) {
            int x;
            cin >> x;
            if(x == N && i >= K1)
                res = "NO";
        }
        cout << res << "\n";
    }
}