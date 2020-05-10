#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cerr << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S, T;
    cin >> S >> T;
    if(sz(T) == sz(S) + 1 && T.substr(0, sz(S)) == S)
        cout << "Yes\n";
    else
        cout << "No\n";
}
