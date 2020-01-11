#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        long long Y = 0, A = 0, best = INT_MIN, ind = -1;
        bool valid = false;
        cin >> N;
        vector<int> V(N);
        for(int i=0; i<N; i++) {
            cin >> V[i];
            Y += V[i];
            A += V[i];
            if(A > best) {
                best = A;
                ind = i;
            }
            if(A <= 0) {
                A = 0;
                valid = true;
            } 
        }
        if(!valid) valid = ind != N-1; 
        //cout << "all: " << Y << " best: " << best << " ";
        if(valid && best >= Y) cout << "NO\n";
        else cout << "YES\n";
    }
}