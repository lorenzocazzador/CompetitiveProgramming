#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> A(N), B(M);
    for(string & x : A)
        cin >> x;
    for(string & x : B)
        cin >> x;
    int Q;
    cin >> Q;
    while(Q--) {
        int Y;
        cin >> Y;
        cout << A[(Y-1)%N] + B[(Y-1)%M] << "\n";
    }
}