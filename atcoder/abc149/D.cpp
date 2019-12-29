#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, R, S, P;
    string T, M = "";
    cin >> N >> K >> R >> S >> P >> T;
    long long score = 0;
    for(int i=0; i<N; i++)
        M += (T[i] == 'r' ? 'p' : (T[i] == 'p' ? 's' : 'r'));

    for(int i=0; i<N; i++) {
        if(i < K)
            score += (M[i] == 'r' ? R : (M[i] == 'p' ? P : S));
        else {
            int t1 = (M[i] == 'r' ? R : (M[i] == 'p' ? P : S)),
                t2 = (M[i-K] == 'r' ? R : (M[i-K] == 'p' ? P : S));
            
            if(M[i-K] == 'x' || M[i-K] != M[i])
                score += t1;
            else if(t1 > t2) {
                score += t1;
                score -= t2;
            } else 
                M[i] = 'x';
        }    
    }

    cout << score << "\n";
}