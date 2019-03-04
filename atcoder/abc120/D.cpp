#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int> vi;
typedef pair<int, int> pii;
#define F first
#define S second
typedef vector<pii> vii;

struct UnionFind{
    int N;
    vi p, rank, setSize;

    UnionFind(int N){
        p.resize(N, 0);
        for(int i=0; i<N; i++) p[i] = i;
        rank.resize(N, 0);
        setSize.resize(N, 1);
    }

    int findSet(int i){ return (p[i] == i) ? i : (p[i] = findSet(p[i])); }

    bool isSameSet(int i, int j){ return findSet(i) == findSet(j); }

    void unionSet(int i, int j){
        if(!isSameSet(i, j)){
            int x = findSet(i), y = findSet(j);

            if(rank[x] > rank[y]){
                p[y] = x;
                setSize[x] += setSize[y];
            }else{
                p[x] = y;
                setSize[y] += setSize[x];
                if(rank[x] == rank[y]) rank[y]++;
            }
        }
    }

    int sizeOfSet(int i){ return setSize[findSet(i)]; }
};


main(){
    int N, M;
    cin >> N >> M;


    vii edges(M);
    for(int i=0; i<M; i++){
        int A, B;
        cin >> A >> B;
        edges[i] = {--A, --B};
    }

    vi res(M);

    int total_pairs = (N-1)*N / 2;
    res[M-1] = total_pairs;

    UnionFind UF(N);
    for(int i=M-2; i>=0; i--){
        pii x = edges[i+1];
        if(!UF.isSameSet(x.F, x.S)){
            total_pairs -= UF.sizeOfSet(x.F) * UF.sizeOfSet(x.S);
            res[i] = total_pairs;
            UF.unionSet(x.F, x.S);
        }else res[i] = res[i+1];
    }

    for(int i=0; i<M; i++) cout << res[i] << "\n";

    return 0;
}
