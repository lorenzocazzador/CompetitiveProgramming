#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define F first
#define S second

int main() {
    int N;
    cin >> N;
    int maxi = 0;
    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        cout << max(0, x + maxi) << " ";
        maxi = max(maxi, x + maxi);
    }
    cout << "\n";
}