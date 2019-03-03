#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int zeros = 0, ones = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0') zeros++;
        else ones++;
    }

    cout << min(zeros,ones)*2;
}
