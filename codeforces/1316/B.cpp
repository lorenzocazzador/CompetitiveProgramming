#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while(T--) {
        int N; string s;
        cin >> N >> s;

        set<pair<string, int>> res;
        for(int i=1; i<=N; i++) {
            string a = s.substr(i-1), b = s.substr(0,i-1);
            if((N - i) % 2 == 0) reverse(b.begin(), b.end());
            res.insert({a+b, i});
        }

        cout << res.begin()->first << "\n" << res.begin()->second << "\n";
    }
}