#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool areCoprime(ll i, ll j) {
    if(i > j) swap(i,j);
    for(ll x=2; x<=i; x++)
        if(i % x == 0 && j % x == 0)
            return false;
    return true;
}

int main() {
    ll N;
    cin >> N;
    for(ll i=sqrt(N); i>=1; i--) {
        if(N % i == 0) {
            ll j = N / i;
            if(areCoprime(i,j)) {
                cout << i << " " << j << "\n";
                return 0;
            } 
        }
    }
}