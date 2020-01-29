#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s, t;
        cin >> s >> t;
        vector<vector<int>> v(40);
        for(int i=0; i<s.size(); i++)
            v[s[i]-'a'].emplace_back(i);
        int i=0, res = 0;
        while(i<t.size()) {
            if(v[t[i]-'a'].empty()) {
                res = -1;
                break;
            }
            int tmp = -1;
            auto it = upper_bound(v[t[i]-'a'].begin(), v[t[i]-'a'].end(), tmp);
            while(it != v[t[i]-'a'].end()) {
                i++;
                tmp = *it;
                if(i < t.size())
                    it = upper_bound(v[t[i]-'a'].begin(), v[t[i]-'a'].end(), tmp);
                else 
                    break;
            }
            res++;
        }
        cout << res << "\n";
    }
}