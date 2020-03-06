#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, M, cont = 0;
        cin >> N >> M;
        for(int i=0; i<N; i++) {
            int x;
            cin >> x;
            cont += x;
        }
        cout << min(cont, M) << "\n";
    }
}