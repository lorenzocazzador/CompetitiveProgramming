#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;
typedef vector<pii> vii;

#define F first
#define S second

#define ERR 1e-9

#if !ONLINE_JUDGE && !EVAL
    #define dbg_var(x) cerr << #x << ": " << x << "\n";
    #define dbg_iter(x, y) cerr  << #x << ": " << prll_iterable(x, y) << "\n";
#else
    #define dbg_var(x)
    #define dbg_iter(x, y)
#endif // ONLINE_JUDGE

template <typename T1, typename T2>
string prll_iterable( T1 begin_iter, T2 end_iter){
    bool first = true;
    stringstream res;
    res << "[ ";
    for(; begin_iter != end_iter; ++begin_iter){
        if(!first) res << ", ";
        first = false;
        res << *begin_iter;
    }
    res << " ]";
    return res.str();
}

void aggMax(ll & res, ll x){ if(x > res)res = x; }
void aggMin(ll & res, ll x){ if(x < res)res = x; }

ll II(){ ll i; cin >> i; return i; }
void OI(ll i){ cout << i; }

// constralls
const ll MAXN = 2 * 100000 + 1;
ll primes[MAXN];
const ll MAXP = 2800000;
vector<bool> isNotPrime(MAXP);

void crivello(){
    ll ind = 1;
    for(ll i=2; i<MAXP; i++){
        if(ind >= MAXN) break;
        if(!isNotPrime[i]){
            for(ll j=i*i; j<MAXP; j+=i)isNotPrime[j]=true;
            primes[ind++] = i;
        }
    }
}

ll findGreatesDiv(ll N) {
    for(ll i=1; i<MAXN; i++) {
        if(N % primes[i] == 0) return N / primes[i];
    }
    return -1;
}

ll valids[MAXP];

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    crivello();

    ll N = II();
    vi B(N*2);

    for(ll i=0; i<N*2; i++) {
        B[i] = II();
        valids[B[i]]++;
    }

    vi A(N);
    ll ind = 0;

    sort(B.begin(), B.end(), greater<int>());

    for(ll & x : B) {
        if(valids[x] > 0 && isNotPrime[x]) {
            ll greatestDiv = findGreatesDiv(x);
            if(valids[greatestDiv] > 0) {
                A[ind++] = x;
                valids[x]--;
                valids[greatestDiv]--;
            }
        }
    }

    for(ll & x : B) {
        if(valids[x] > 0 && !isNotPrime[x] && x < MAXN) {
            ll x_esimo = primes[x];
            if(valids[x_esimo] > 0) {
                A[ind++] = x;
                valids[x]--;
                valids[x_esimo]--;
            }
        }
    }

    for(ll & x : A) cout << x << " ";
    return 0;
}
