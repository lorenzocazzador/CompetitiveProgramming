#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> P(M);
    vector<string> S(M);
    for(int i=0; i<M; i++)
        cin >> P[i] >> S[i];
    vector<long long> nWA(N+1,0);
    long long ans = 0, pen = 0;
    for(int i=0; i<M; i++) {
        if(S[i] == "AC" && nWA[P[i]] != -1) {
            ans++;
            pen += nWA[P[i]];
            nWA[P[i]] = -1;
        } else if(S[i] == "WA" && nWA[P[i]] != -1) nWA[P[i]]++; 
    }
    cout << ans << " " << pen << "\n";
}