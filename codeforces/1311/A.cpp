#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b;
        cin >> a >> b;
        if(b > a) {
            cout << ((b-a) % 2 ? 1 : 2) << "\n";
        } else if(a > b) {
            cout << ((b-a) % 2 ? 2 : 1) << "\n";
        } else cout << 0 << "\n";
    }
}