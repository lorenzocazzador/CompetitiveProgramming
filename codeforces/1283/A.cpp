#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int h, m;
        cin >> h >> m;
        cout << (24*60 - (h*60+m)) << "\n";
    }
}