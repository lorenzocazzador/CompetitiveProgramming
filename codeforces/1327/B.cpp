#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<vector<int>> S(N);
        for(vector<int> & x : S) {
            int K; cin >> K;
            x.resize(K);
            for(int & y : x) cin >> y;
        }      
        set<int> L;
        for(int i=1; i<=N; i++) L.insert(i);
        int r = -1;
        for(int j=0; j<N; j++) {
            bool found = false;
            for(int i=0; i<(int)S[j].size() && !found; i++) {
                if(L.erase(S[j][i]) > 0) 
                    found = true;
            }
            if(!found) r = j+1;
        }
        if(r != -1) {
            cout << "IMPROVE\n" << r << " " << *L.begin() << "\n"; 
        } else cout << "OPTIMAL\n";
    }

}