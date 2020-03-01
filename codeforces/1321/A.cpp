#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for(int & x : A) 
        cin >> x;
    for(int & x : B)
        cin >> x;
    int a = 0, b = 0;
    for(int i=0; i<N; i++) {
        if(A[i] && !B[i])
            a++;
        if(!A[i] && B[i])
            b++;
    }
    if(a == 0)
        cout << -1 << "\n";
    else 
        cout << (b / a) + 1 << "\n";
}