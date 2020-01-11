#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll N;
    cin >> N;
    for(ll i=sqrt(N); i>=1; i--) {
        if(N % i == 0) {
            ll j = N / i;
            if(__gcd(i,j) == 1) {
                cout << i << " " << j << "\n";
                return 0;
            } 
        }
    }
}