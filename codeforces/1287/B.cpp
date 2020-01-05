#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second

int main() {
    int N, K;
    cin >> N >> K;
    vector<string> C(N);
    set<string> S;
    for(string & x : C) {
        cin >> x;
        S.insert(x);
    }
    int res = 0;
    for(int j=0; j<N; j++)
        for(int z=j+1; z<N; z++) {
            string x = C[j], y = C[z], F = "";
            for(int i=0; i<K; i++) {
                if(x[i] == y[i]) F += x[i];
                else if((x[i] == 'S' && y[i] == 'E') || (y[i] == 'S' && x[i] == 'E')) F += "T";
                else if((x[i] == 'S' && y[i] == 'T') || (y[i] == 'S' && x[i] == 'T')) F += "E";
                else if((x[i] == 'T' && y[i] == 'E') || (y[i] == 'T' && x[i] == 'E')) F += "S";
            }
            if(S.count(F) != 0) res++;
        }
    cout << res/3;
}