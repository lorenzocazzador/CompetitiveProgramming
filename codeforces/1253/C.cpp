#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for(long long & x : A) cin >> x;

    sort(A.begin(), A.end());

    long long ris = 0;
    vector<long long> sum(M,0);
    
    for(int i=0; i<N; i++) {
        ris += A[i] + sum[i%M];
        sum[i%M] += A[i];
        cout << ris << " ";
    }
}