#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;

    int notA = 0;
    string s = "", s1 = "", s2 = "";

    for(char c : t)
        notA += (c != 'a');

    int i = 0;
    for(int j=0; j<int(t.size()); j++){
        if(t[j] == 'a' || i < notA/2){
            s += t[j];
            if(t[j] != 'a'){
                i++;
                s2 += t[j];
            }
        }
        else{
            s1 = t.substr(j);
            break;
        }
    }

    if(s1 != s2) cout << ":(\n";
    else cout << s << "\n";
}
