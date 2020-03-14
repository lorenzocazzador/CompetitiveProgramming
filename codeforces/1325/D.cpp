#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define F first
#define S second

int main() {
    ll U, V;
    cin >> U >> V;
    if(U == 0 && V == 0)
        cout << "0\n";
    else if(V < U || (V-U) % 2)
        cout << "-1\n";
    else if(V == U)
        cout << "1\n" << U << "\n";
    else{
        ll A = 0, B = 0;
        for(int i=60; i>=0; i--) {
            ll K = (1LL << i);
            if(U & K) 
                A |= K;
            else if(V - A - B - K*2LL >= 0LL) {
                A |= K;
                B |= K;
            }
        }
        if(A^B == U && A+B == V)    
            cout << "2\n" << A << " " << B << "\n";
        else 
            cout << "3\n" << U << " " << (V-U)/2 << " " << (V-U)/2 << "\n";
    } 
}