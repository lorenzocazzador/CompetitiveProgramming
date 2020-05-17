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

    string N;
    cin >> N;
    int R = N.size() - 1;
    if(N[R] == '2' || N[R] == '4' || N[R] == '5' || N[R] == '7' || N[R] == '9')
        cout << "hon";
    else if(N[R] == '0' || N[R] == '1' || N[R] == '6' || N[R] == '8')
        cout << "pon";
    else
        cout << "bon";
}
