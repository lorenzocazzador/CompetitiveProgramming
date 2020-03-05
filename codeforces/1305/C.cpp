#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for(int & x : A)
        cin >> x;
    if(N > M) 
        cout << "0\n";
    else {
        int res = 1;
        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++)
                res = ((res % M) * (abs(A[i] - A[j]) % M)) % M;
        cout << res << "\n";
    }
}