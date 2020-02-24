#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, M;
        cin >> N >> M;
        string s;
        cin >> s;
        vector<int> p(M);
        for(int & x : p)
            cin >> x;
        vector<int> occ[26], res(26, 0);
        for(int i=0; i<N; i++) {
            res[s[i]-'a']++;
            occ[s[i]-'a'].push_back(i);
        }
        /*for(int i=0; i<3; i++) {
            cout << i << " -> ";
            for(int & x : occ[i])
                cout << x << " ";
            cout << "\n";
        }
        cout << "\n\n";*/
        for(int & x : p) {
            for(int i=0; i<26; i++) {
                auto tmp = upper_bound(occ[i].begin(), occ[i].end(), x-1);
                res[i] += distance(occ[i].begin(), tmp);
            }
        }
        for(int i=0; i<26; i++)
            cout << res[i] << " ";
        cout << "\n";
    }
}