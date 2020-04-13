#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n <= 2) cout << "0\n";
        else cout << (n-1)/2 << '\n';
    }
}