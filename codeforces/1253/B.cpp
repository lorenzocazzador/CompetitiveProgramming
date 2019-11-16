#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(int & x : A) cin >> x;

    set<int> s, entered;
    vector<int> ris;
    int e = 0;

    for(int i=0; i<N; i++) {
        int x = A[i];
        if((x > 0 && entered.count(x)==1) || (x < 0 && s.count(-x)==0))
            return cout << "-1\n", 0;
        
        if(x<0)
            s.erase(-x);
        else {
            s.insert(x);
            entered.insert(x);
        }
        e++;

        if(s.size() == 0) {
            ris.emplace_back(e); 
            entered.clear();
            s.clear();
            e = 0;
        }
    }

    if(s.size() != 0) return cout << "-1\n", 0;
    
    cout << ris.size() << "\n";
    for(int & x : ris) cout << x << " ";

}