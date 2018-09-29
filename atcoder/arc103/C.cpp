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
#define MAXN 500010

int sequence[MAXN];
int freqPosPari[MAXN];
int freqPosDispari[MAXN];
pair<pi, pi> freqMaxPari, freqMaxDisp; /// F = occorrenze, S = num

void aggiorna(int freq, int num, pair<pi, pi> & p){
    if(freq > p.F.F){
        if(num != p.F.S){ p.S.F = p.F.F;  p.S.S = p.F.S; }
        p.F.F = freq;
        p.F.S = num;
    }else if(freq > p.S.F){
        p.S.F = freq;
        p.S.S = num;
    }
}

void print(pi p){
 cout << "freq: " << p.F << " num: " << p.S << "\n";
}

int main(){
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE*/

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> sequence[i];
    }

    for(int i=0; i<N; i++){
        if(i%2 == 0){
            freqPosPari[sequence[i]] ++;
            aggiorna(freqPosPari[sequence[i]], sequence[i], freqMaxPari);
        }else{
            freqPosDispari[sequence[i]] ++;
            aggiorna(freqPosDispari[sequence[i]], sequence[i], freqMaxDisp);
        }
    }

    /*6
105 119 105 119 105 119ccout << "Pari:\n";
    print(freqMaxPari.F);
    print(freqMaxPari.S);
    cout << "Dispari:\n";
    print(freqMaxDisp.F);
    print(freqMaxDisp.S);*/

    N /= 2; int ris = 0;
    if(freqMaxDisp.F.S != freqMaxPari.F.S){
        ris = (N-freqMaxPari.F.F) + (N-freqMaxDisp.F.F);
    }else{
        if(freqMaxPari.S.F > freqMaxDisp.S.F){
            ris = (N-freqMaxPari.S.F) + (N-freqMaxDisp.F.F);
        }else{
            ris = (N-freqMaxPari.F.F) + (N-freqMaxDisp.S.F);
        }
    }
    cout << ris;
    return 0;
}
