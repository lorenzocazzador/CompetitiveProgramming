#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define db(x) cerr << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string N;
    cin >> N;
    bool ans = false;
    for(char c : N)
        if(c == '7') ans = true;
    cout << (ans ? "Yes\n" : "No\n");
}
