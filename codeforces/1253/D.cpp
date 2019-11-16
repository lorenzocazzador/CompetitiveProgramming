#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
#define F first
#define S second

vector<int> p;
vector<pii> seq;

void print_seq(bool ind) {
    for(int i=0; i<seq.size(); i++)
        if(seq[i].F != INT_MAX) {
            if(ind) cout << "i: " << i << " --> "; 
            cout << seq[i].F << " " << seq[i].S << "\n";
        }
}

void init(int N) {
    p.resize(N);

    for(int i=0; i<N; i++) {
        p[i] = i;
        seq[i] = {i,i};
    }
}

int find(int a) {
    return a == p[a] ? a : p[a] = find(p[a]);
}

void join(int a, int b) {
    int fb = find(b), fa = find(a);
    p[fb] = fa;
    seq[fa] = {min(seq[fb].F,seq[fa].F),max(seq[fb].S,seq[fa].S)};
    seq[fb] = {INT_MAX,INT_MAX};
}

bool check(int a, int b) {
    return find(a) == find(b);
}

void print_p(int N) {
    cout << "\nParents\n";
    for(int i=0; i<N; i++)
        cout << find(p[i]) << " ";
}

int main() {
    int N, M;
    cin >> N >> M;

    seq.resize(N);
    init(N);
    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        if(!check(a-1,b-1))
            join(a-1, b-1);
    }

    sort(seq.begin(), seq.end());

    //cout << "\nSequenze:\n";
    //print_seq(0);

    pii last = seq[0];
    int res = 0;
    for(int i=1; i<N; i++) {
        if(seq[i].F < last.S) {
            res++;
            last = {min(last.F, seq[i].F), max(last.S, seq[i].S)};
        } else last = seq[i];
        
        if(seq[i+1].F == INT_MAX) break;
    }

    cout << res << "\n";
    return 0;
}

