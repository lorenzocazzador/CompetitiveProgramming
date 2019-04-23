#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    return (b == 0) ? a : gcd(b, a%b);
}

int main(){
    int N, M;
    cin >> N >> M;

    long long f, minGCD = LLONG_MAX;
    cin >> f;
    long long prec = f;

    for(int i=1; i<N; i++){
        long long v;
        cin >> v;
        minGCD = (i==1) ? v-prec : gcd(minGCD, v-prec);
        prec = v;
    }

    for(int i=0; i<M; i++){
        long long v;
        cin >> v;
        if(minGCD % v == 0)
            return cout << "YES\n" << f << " " << i+1 << "\n", 0;
    }
    cout << "NO\n";
}
