#include <bits/stdc++.h>
using namespace std;

int found(int x, set<int> v) {
    return distance(v.begin(), v.lower_bound(x));
}

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N), B(M), pos(N+1), sum(N+1,1);
        int tolte = 0;
        int i = 0;
        for(int & x : A) {
            cin >> x;
            pos[x] = i++;
        }

        for(int & x : B)
            cin >> x;

        int max_R = 0;
        long long res = 0;
        for(int & x : B) {  
            if(pos[x] <= max_R) {
                //cout << "entro1 ";
                res++;
            } else {
                //cout << "entro2 ";
                long long dav = pos[x] - tolte;
                res += dav*2 + 1;
            }
            tolte++;
            max_R = max(max_R, pos[x]);
            //cout << "res_tmp: " << res << "\n";
        }
        cout << res << "\n";
    }
}