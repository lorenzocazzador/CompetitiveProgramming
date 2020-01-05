#include <bits/stdc++.h>

using namespace std;

int N ;
int memo[100010];

int dp(int i, int* h) {
    if(i == N - 1) return 0;
    if( memo[i] != -1) return memo[i];
    int a = INT_MAX;
    if(i < N - 2) a = abs(h[i] - h[i + 2]) + dp(i + 2, h);
    int b = abs(h[i] - h[i + 1]) + dp(i + 1, h);
    return  memo[i] = min(a, b);
}

int main() {
    cin >> N;
    memset(memo, -1, sizeof memo);
    int h[N];
    for(int i = 0; i < N; i++){
        cin >> h[i]; 
    }
    cout << dp(0, h);
    return 0;
}
