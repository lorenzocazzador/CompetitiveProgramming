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
        int diffTot = 0;
        for(char c : s) 
            diffTot += (c == '0' ? 1 : -1);
        int diffAct = 0, res = (X == 0) ? 1 : 0;
        for(char c : s) {
            diffAct += (c == '0' ? 1 : -1);

            if(diffAct == X && diffTot == 0) {
                res = -1;
                break;
            } else if( diffTot != 0 && (X-diffAct) % diffTot == 0 && (X-diffAct) / diffTot >= 0)
                res++;
        }
        cout << res << "\n";
    }
}