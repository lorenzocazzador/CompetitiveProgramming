#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <limits.h>
#include <string.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vii;

typedef long long int lld;

#define F first
#define S second

#define ERR 1e-9

#ifndef ONLINE_JUDGE
        #define var(x) cerr << #x << ": " << x << "\n";
#endif // ONLINE_JUDGE

int main(){
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE


    string S, T;

    cin >> S >> T;
    bool sol;

    for(int i=0; i<S.size(); i++){
        sol = true;
        if(S[i] != T[i]){
            //var(S[i]);
            char s = S[i], t = T[i];
            for(int j=0; j<S.size(); j++){
                if(S[j] == t){
                    if(j < i){ sol = false; break; }
                    S[j] = s;
                }else if(S[j] == s){
                    if(j < i){ sol = false; break; }
                    S[j] = t;
                }
            }
        }
        if(!sol){ break; }
    }

    if(sol)cout << "Yes";
    else cout << "No";
    return 0;
}
