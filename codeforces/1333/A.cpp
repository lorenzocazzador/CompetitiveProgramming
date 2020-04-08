#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define db(x) cerr << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while(T--) {
        int N, M;
        cin >> N >> M;
        char R[N][M]; 
        for(int i=0; i<N; i++) 
            for(int j=0; j<M; j++) {
                if(i%2 == j%2) R[i][j] = 'B';
                else R[i][j] = 'W';
            }
        if((N*M)%2==0) {
            if(R[N-1][M-1]=='W') R[N-1][M-1] = 'B';
            else if(R[N-1][0]=='W') R[N-1][0] = 'B';
            else if(R[0][M-1] == 'W') R[0][M-1] = 'B';
        }
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) cout << R[i][j];
            cout << "\n";
        }
    }
}