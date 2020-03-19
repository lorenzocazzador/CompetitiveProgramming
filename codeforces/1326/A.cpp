#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define F first
#define S second

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        if(N == 1) cout << "-1\n";
        else {
            cout << "2";
            for(int i=0; i<N-1; i++) cout << "7";
            cout << "\n";
        } 
    }
}