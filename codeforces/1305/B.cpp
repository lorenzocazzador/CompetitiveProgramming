#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<int> res;
    int i=0, j = s.size() -1;
    //int skip = 1; 
    while(i<j) {
        while(i < s.size() && s[i] == ')') { i++;   }
        while(j >= 0 && s[j] == '('){ j--;  }
        if(i < s.size() && j >= 0 && i < j) {
            assert(s[i] == '(');
            assert(s[j] == ')');
            res.insert(i+1);
            res.insert(j+1);
            i++, j--;
        } 
    }
    if((int)res.size() == 0)
        cout << "0\n";
    else {
        cout << "1\n" << (int)res.size() << "\n";
        assert((int)res.size() % 2 == 0);
        for(int x : res) cout << x << " ";
        cout << "\n";
    }
}