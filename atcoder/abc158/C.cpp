#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    double a = ceil(A / 0.08), b = ceil(B / 0.1);
    if(a >= b && floor(a*0.1) == B)
        cout << a << "\n";
    else if(b > a && floor(b*0.08) == A)
        cout << b << "\n";
    else
        cout << "-1\n";
}