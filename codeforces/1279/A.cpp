#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int r, g, b;
        cin >> r >> g >> b;

        int m = max(r,max(g,b));
        int rest = g+b+r-m;
        if(m <= rest || m-1 <= rest)
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
}