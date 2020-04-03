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
    int N, M;
    cin >> N >> M;
    vi L(M), res(M, 0);
    for(int i=0; i<M; i++) {
        cin >> L[i]; 
        if(i + L[i] > N) return cout << "-1\n", 0;
    }
    vector<ll> suffix_sum(M);
    suffix_sum[M-1] = L[M-1];
    for(int i=M-2; i>=0; i--) suffix_sum[i] = suffix_sum[i+1] + L[i];
    if(suffix_sum[0] < N) return cout << "-1\n", 0;
    for(int i=0; i<M; i++) 
        cout << max((ll)i+1, N - suffix_sum[i] + 1) << " ";
    cout << "\n";
}