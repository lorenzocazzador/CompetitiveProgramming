#include <bits/stdc++.h>
using namespace std;

int N;
vector<double> P;
double memo[3000][3000];

double solve(int i, int head) {
    if(i == N)
        return head >= (N/2+N%2) ? 1.0 : 0.0;
    else if(memo[i][head] != -1)
        return memo[i][head];
    else
        return memo[i][head] = P[i] * solve(i+1, head+1) + (1.0 - P[i]) * solve(i+1, head);
}

int main() {
    cin >> N;
    P.resize(N);
    for(double & x :P)  
        cin >> x;
    
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) 
            memo[i][j] = -1;
            
    cout.precision(10);
    cout << solve(0, 0) << "\n";   
}