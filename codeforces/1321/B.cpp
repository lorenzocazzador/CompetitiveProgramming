#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, long long> m;
    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        m[x - i] += x;
    }
    long long res = 0;
    for(auto x : m) 
        res = max(res, x.second);
    cout << res << "\n";
}