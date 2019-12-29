#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, K;
    cin >> A >> B >> K;
    cout << max(0LL,A-K) << " " << (K-A < 0 ? B : max(0LL,B-(K-A)));
}