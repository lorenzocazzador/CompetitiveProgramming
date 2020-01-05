#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int res = 0, lastHungry = -1;
        for(int i=0; i<S.size(); i++) {
            if(S[i] == 'P' && lastHungry != -1)
                res = max(res, i-lastHungry);
            else if(S[i] == 'A')
                lastHungry = i;
        }
        if(lastHungry != -1)
            res = max(res, N-1-lastHungry);
        cout << res << "\n";
    }
}