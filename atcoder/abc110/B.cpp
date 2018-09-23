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

   int N, M, X, Y, maxX = -200, minY = 200, tmp;

   cin >> N >> M >> X >> Y;

   while(N--){ cin >> tmp; maxX = max(maxX, tmp); }
   while(M--){ cin >> tmp; minY = min(minY, tmp); }

   maxX = max(maxX, X);
   minY = min(minY, Y);

   if(maxX < minY)cout << "No War";
   else cout << "War";

   return 0;
}
