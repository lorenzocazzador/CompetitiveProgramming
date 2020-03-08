#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> o, e;
        for(int i=1; i<=N; i++) {
            int x;
            cin >> x;
            if(x % 2) o.emplace_back(i);
            else e.emplace_back(i);
        }
        if(o.size() > 1) 
            cout << "2\n" << o[0] << " " << o[1] << "\n";
        else if(e.size() > 0) 
            cout << "1\n" << e[0] << "\n";
        else
            cout << "-1\n";
    }
}