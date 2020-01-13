#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, M, sum = 0;
    cin >> N >> K >> M;
    vector<int> A(N-1);
    for(int & x : A) {
        cin >> x;
        sum += x;
    }
    int res = M * N - sum;
    if(res < 0) res = 0;
    if(res >= 0 && res <= K) cout << res << "\n";
    else cout << "-1\n";
}