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

int main(){
    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int A, B, C;

    cin >> A >> B >> C;

    int biggest, ris = 0;
    biggest = max(A, B);
    ris += min(A, B);
    ris += min(biggest, C) + max(biggest, C)*10;

    cout << ris;

    return 0;
}
