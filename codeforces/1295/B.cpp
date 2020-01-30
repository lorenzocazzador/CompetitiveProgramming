#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, X;
        cin >> N >> X;
        string s;
        cin >> s;
        int zT = 0, oT = 0;
        for(char c : s) {
            zT += (c == '0');
            oT += (c == '1');
        }
        int zA = 0, oA = 0, res = (X == 0) ? 1 : 0;
        for(char c : s) {
            zA += (c == '0');
            oA += (c == '1');

            if(zA - oA == X && zT == oT) {
                res = -1;
                break;
            } else if( zT != oT && (X-(zA-oA)) % (zT-oT) == 0 && (X-(zA-oA)) / (zT-oT) >= 0)
                res++;
        }
        cout << res << "\n";
    }
}