#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N, K;
        cin >> N >> K;
        int res = N/K*K + min(N%K, K/2);
        cout << res << "\n";
    }
}