#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<bool> is_prime(1000000,true);

    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<=sqrt(1000000); i++)
        if(is_prime[i])
            for(int j=i*i; j<1000000; j+=i) 
                is_prime[j] = false;

    int X;
    cin >> X;
    while(!is_prime[X]) X++;
    cout << X;
}