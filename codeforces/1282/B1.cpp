#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while(T--) {
        int N, P, K;
        cin >> N >> P >> K;

        vector<int> A(N);
        for(int i=0; i<N; i++)
            cin >> A[i];
        
        sort(A.begin(), A.end());
        int res = 0;
        for(int i=0; i<N; i++) {
            if(i >= K)
                A[i] += A[i-K];
            if(A[i] <= P)
                res = i+1;
        }

        cout << res << "\n";
    }
}