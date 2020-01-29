#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        cout << string(N%2,'7') + string(N/2-N%2,'1') << "\n"; 
    }
}