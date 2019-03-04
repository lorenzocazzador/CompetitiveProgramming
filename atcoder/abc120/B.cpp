#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, K;

    cin >> A >> B >> K;

    int C = 0;
    for(int i=min(A,B); i>=0; i--){
        if(!(A%i) && !(B%i)){ C++; }
        if(K == C){
            cout << i;
            return 0;
        }
    }

    return 0;
}
