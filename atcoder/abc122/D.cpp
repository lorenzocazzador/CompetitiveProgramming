#include <bits/stdc++.h>
using namespace std;

#define sz(s) int(s.size())
const int MOD = 1000000000 + 7;
const int MAXN = 110;
int dp[MAXN][4][4][4];

string f1[] = { "AGC", "ACG", "GAC" };
int cnt;

bool forbidden(string s){
    if(sz(s) == 3) return s == "AGC" || s == "ACG" || s == "GAC";

    bool res = false;
    for(int i=0; i<3; i++) if(s.find(f1[i]) != string::npos) res = true;

    string s2 = s;
    swap(s2[0], s2[1]);
    if(s2.find("AGC") != string::npos) res = true;
    swap(s2[0], s2[1]);

    swap(s2[2], s2[3]);
    if(s2.find("AGC") != string::npos) res = true;

    //if(res) cout << ++cnt << ": " << s << "\n";
    return res;
}

int main(){

    //cout << (forbidden("GATC") ? "true" : "false");

    int N; cin >> N;

    map<int, string> m = { {0, "A"}, {1, "C"}, {2, "G"}, {3, "T"} };

    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            for(int z=0; z<4; z++){
                string stato = m[i] + m[j] + m[z];
                dp[3][i][j][z] = forbidden(stato) ? 0 : 1;
            }

    for(int len=4; len<=N; len++)
        for(int t=0; t<4; t++)
            for(int p=0; p<4; p++)
                for(int u=0; u<4; u++)
                    for(int x=0; x<4; x++){
                        string stato = m[t] + m[p] + m[u] + m[x];
                        if(forbidden(stato)) continue;
                        dp[len][p][u][x] = (dp[len][p][u][x] + dp[len-1][t][p][u]) % MOD;
                    }


    int sum = 0;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            for(int z=0; z<4; z++)
                sum = (sum + dp[N][i][j][z]) % MOD;

    cout << sum << "\n";
}
