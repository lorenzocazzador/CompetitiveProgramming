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

vi getPrefixSum(vi A) {
    vi res(A.size()+1, 0);
    for(int i=1; i<=int(A.size()); i++)
        res[i] = res[i-1] + A[i-1];
    return res;
}

void printV(string S, vi V) {
    cout << S << " -> ";
    for(int & x : V)
        cout << x << ' ';
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    vi A, B, C;
    for(int i=0; i<N; i++) {
        int t, a, b;
        cin >> t >> a >> b;
        if(a && b)
            C.push_back(t);
        else if(a)
            A.push_back(t);
        else if(b)
            B.push_back(t);
    }
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    A = getPrefixSum(A);
    B = getPrefixSum(B);
    C = getPrefixSum(C);

    int R = INT_MAX;
    for(int i=0; i <= min(int(C.size()-1),K); i++) {
        int x = K - i;
        if(x < A.size() && x < B.size())
            R = min(R, C[i] + A[x] + B[x]);
    }
    cout << (R == INT_MAX ? -1 : R) << '\n';
}
