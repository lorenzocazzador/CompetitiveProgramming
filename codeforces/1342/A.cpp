#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        cout << min(a*(x+y), b*min(x,y)+a*abs(x-y)) << '\n';
    }
}