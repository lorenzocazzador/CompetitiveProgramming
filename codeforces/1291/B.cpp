#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> V(N);
        for(int & x : V)
            cin >> x;
        int i = 0, j = N-1, t = 0;
        bool ans = true;
        while(i <= j) {
            if(i+1 == j &&  V[j] <= t && V[i] <= t)
                ans = false;
            if(V[i] < t || V[j] < t)
                ans = false;
            i++, j--, t++;
        }
        cout << (ans ? "Yes\n" : "No\n");
    }
}