#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--){
        int N;
        cin >> N;

        vector<int> A(N), B(N);
        for(int & x : A) cin >> x;
        for(int & x : B) cin >> x;

        string ris = "YES\n";
        int diff = -1;
        for(int i=0; i<N; i++) {
            int ad = B[i] - A[i];
            if(ad == 0) {
                if(diff != -1) diff = 0;
                continue;
            }else if (ad > 0 && ad == diff)
                continue;
            else if(diff == -1 && ad > 0) 
             diff = ad;      
            else 
                ris = "NO\n";
        }

        cout << ris;
    }
}