#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s;
    cin >> s;

    char c = s[0]; int pos = 0;
    for(int i=1; i<N; i++){
        if(s[i] < c){
            cout << "YES\n" << pos+1 << " " << i+1 << "\n";
            return 0;
        }else{
            c = s[i];
            pos = i;
        }
    }
    cout << "NO\n";
}
