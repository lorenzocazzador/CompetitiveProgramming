#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        long long X = 0, S = 0;
        for(int i=0; i<N; i++) {
            int x;
            cin >> x;
            X ^= x;
            S += x;
        }

        if(S == 2*X)
            cout << "0\n\n";
        else 
            cout << "2\n" << X << " " << S+X << "\n";
    }
}