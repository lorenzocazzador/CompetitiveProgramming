#include <bits/stdc++.h>
using namespace std;

string s, t;
int memo[3010][3010];
int used[3010][3010];

int solve(int i, int j) {
    if(i == s.size() || j == t.size())
        return 0;

    if(memo[i][j] != -1)
        return memo[i][j];

    int r1 = (s[i] == t[j] ? 1 + solve(i+1, j+1) : 0),
        r2 = solve(i+1, j), 
        r3 = solve(i, j+1),
        rTot = max({r1, r2, r3});
    
    used[i][j] = (rTot == r2 ? 2 : (rTot == r3 ? 3 : 1));

    return memo[i][j] = rTot;
}


int main() {
    cin >> s >> t;

    memset(memo, -1, sizeof memo);
    solve(0,0);

    int i = 0, j = 0;
    string res = "";
    while(i < s.size() && j < t.size()) {
        if(used[i][j] == 1) {
            res += s[i];
            i++, j++;
        } else if(used[i][j] == 2)
            i++;
        else 
            j++;
    }
    
    cout << res << "\n";
}