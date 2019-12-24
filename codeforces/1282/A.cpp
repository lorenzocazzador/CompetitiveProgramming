#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--) {
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        if(b < a)
            swap(b,a);

        int i = c-r, f = c+r, res = abs(b-a);

        if(i >= a && f <= b)
            res -= f-i;
        else if(i < a && f > a)
            res = max(0, res-(f-a));
        else if(i < b && f > b)
            res =max(0, res-(b-i)); 
    
        cout << res << "\n"; 
    }
}