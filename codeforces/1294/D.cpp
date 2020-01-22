#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second

const int MAXN = 4 * 10e5 + 1;
int X, M[MAXN], i;

int solve() {
    for(;i<=MAXN; i++) {
        if(M[i%X] == 0) 
            return i;
        else 
            M[i%X]--;
    }
    return i;
}

int main() {
    int Q;
    cin >> Q >> X;
    for(int i=0; i<Q; i++) {
        int v; 
        cin >> v;
        M[v%X]++;
        cout << solve() << "\n";
    }
}