#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> F(N), S, E;
    vector<bool> V(N, false), H(N, false) ;
    for(int & x : F) {
        cin >> x;
        if(x != 0)
            H[x-1] = true;
    }

    for(int i=0; i<N; i++)
        if(!H[i])
            S.push_back(i);

    for(int & i : S) {
        int n = i;
        while(F[n] != 0) {
            n = F[n] - 1;
        }
        E.push_back(n);
    }

    /*cout << "S: ";
    for(int & x : S) cout << x << " ";
    cout << "\n";
    cout << "E: ";
    for(int & x : E) cout << x << " ";
    cout << "\n";*/

    int i=1;
    for(int j=0; j<E.size(); j++) {
        if(i == S.size()) i=0;
        F[E[j]] = S[i++]+1;
    } 

    for(int & x : F)
        cout << x << " ";
    cout << "\n";
}