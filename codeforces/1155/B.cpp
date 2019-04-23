#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s;
    cin >> s;

    int n8 = 0, mosse = N - 11, distLast8;

    for(int i=0; i<N; i++){
        n8 += (s[i] == '8');
        if(n8 == mosse/2+1 && s[i] == '8')
            distLast8 = i - n8 + 1;
    }
    
    if(mosse/2 >= n8 || distLast8 > mosse/2)
        cout << "NO\n";
    else
        cout << "YES\n";
}
