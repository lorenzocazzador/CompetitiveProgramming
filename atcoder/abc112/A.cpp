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
#define MAXN 100010

#ifndef ONLINE_JUDGE
    #define var(x) cerr << #x << ": " << x;
#else
    #define var(x)
#endif // ONLINE_JUDGE

void aggMax(int & res, int x){ if(x > res)res = x; }
void aggMin(int & res, int x){ if(x < res)res = x; }

int II(){ int i; cin >> i; return i; }
void OI(int i){ cout << i; }

int main(){
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE*/

    int N = II();
    if(N == 1){ cout << "Hello World"; }
    else{
        int A = II(), B = II();
        cout << A+B;
    }
    return 0;
}
