#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;

        int res = INT_MAX;
        int A, B, C;
        for(int i=1; i<=20000; i++)
            for(int j=i; j<=20000; j+=i) {
                int tmp_res = abs(a-i) + abs(b-j), z;
                if(abs(j*(c/j)-c) < abs(j*(c/j+1)-c)) {
                    tmp_res += abs(j*(c/j)-c);
                    z = j*(c/j);
                } else {
                    tmp_res += abs(j*(c/j+1)-c);
                    z = j*(c/j+1);
                }
                if(tmp_res < res) {
                    res = tmp_res;
                    A = i; B = j; C = z;
                }
            }
        cout << res << "\n" << A << " " << B << " " << C << "\n";
    }
}