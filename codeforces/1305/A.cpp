#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for(int & x : A)
            cin >> x;
        for(int & x : B)
            cin >> x;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        for(int & x : A)
            cout << x << " ";
        cout << "\n";
        for(int & x : B)
            cout << x << " ";
        cout << "\n";
    }
}