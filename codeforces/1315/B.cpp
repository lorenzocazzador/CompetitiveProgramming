#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b, p; string s;
        cin >> a >> b >> p >> s;
        int sp = 0, ind = s.size() - 2;
        while(sp + (s[ind] == 'A' ? a : b) <= p) {
            sp += (s[ind] == 'A' ? a : b);
            while(ind >= 0 && s[ind] == s[ind-1]) {
                ind--;
            }
            if(ind >= 0) ind--;
        }
        cout << ind + 2 << "\n";
    }
}
