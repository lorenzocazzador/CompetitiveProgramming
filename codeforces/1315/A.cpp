#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        cout << max({b*x, b*(a-x-1), a*y, a*(b-y-1)}) << "\n";
    }
}