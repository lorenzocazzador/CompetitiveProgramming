#include <bits/stdc++.h>
using namespace std;

int f(int N, int dig){
    int ans = (N-1 > 0) ? N-1 : 1;
    while(dig--) ans*= 9;
    return ans;
}

int main(){
    int N;
    cin >> N;
    int ans = 1, dig = 0;

    while(N != 0){
        if(N%10 == 0) ans = f(N%10, dig);
        else ans = max(ans*(N%10), f(N%10, dig));
        N /= 10; dig++;
    }

    cout << ans << "\n";
}