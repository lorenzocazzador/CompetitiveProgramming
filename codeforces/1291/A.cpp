#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N; 
        string s;
        cin >> N >> s;
        int i = s.size() - 1;
        while(i >= 0 && (s[i] - '0') % 2 == 0) 
            i--;
        s = s.substr(0, i+1);
        int sum = 0;
        for(char x : s)
            sum += (x - '0');
        string res = "";
        bool found = false;
        if(sum % 2) {
            for(char x : s)
                if(!found && (x - '0') % 2)
                    found = true;
                else res += x;
            s = res;
        }
        while(s[0] == '0')
            s = s.substr(1, s.size()-1);
        if(s != "" && (s[s.size()-1] - '0') % 2 == 0)
            s = "";
        cout << (s == "" ? "-1" : s) << "\n";
    }
}