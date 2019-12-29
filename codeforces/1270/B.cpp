#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        int prec = -1;
        bool solv = false;
        for(int i=0; i<N; i++) {
            int x;
            cin >> x;
            if(!solv && prec != -1 && abs(prec-x) >= 2) {
                cout << "YES\n" << i << " " << i+1 << "\n";
                solv = true;
            } 
            prec = x;
        }

        if(!solv)
            cout << "NO\n";
    }
}