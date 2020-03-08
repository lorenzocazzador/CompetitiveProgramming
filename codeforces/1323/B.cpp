#include <bits/stdc++.h>
using namespace std;

int c(vector<int> & v, int x) {
    int res = 0;
    for(int & i : v) {
        if(i >= x)
            res += i - x + 1;
    }
    return res;
}

int main() {
    int N, M, K, x, cont = 0;
    cin >> N >> M >> K;
    vector<int> A, B;
    for(int i=0; i<N; i++) {
        cin >> x;
        if(x) {
            cont++;
        } else {
            A.emplace_back(cont);
            cont = 0;
        }
    }
    if(cont) A.emplace_back(cont);
    cont = 0;
    for(int i=0; i<M; i++) {
        cin >> x;
        if(x) {
            cont++;
        } else {
            B.emplace_back(cont);
            cont = 0;
        }
    }
    if(cont) B.emplace_back(cont);

    long long res = 0;
    for(int i=1; i*i <= K; i++) {
        if(K % i == 0) {
            res += c(A, i) * c(B, K/i);
            if(K/i != i)
                res += c(A, K/i) * c(B, i);
        }
    }
    cout << res << "\n";
}