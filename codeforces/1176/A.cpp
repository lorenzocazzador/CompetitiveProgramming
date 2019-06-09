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
#define MAXN 1000000

ll solve(ll N){
    ll res = 0;
    while(N > 1){
        if(N%5 == 0){
            N/=5;
            res +=3;
        } else if(N%3 == 0){
            N/=3;
            res += 2;
        }else if(N%2 == 0){
            N/=2;
            res++;
        } else break;
    }
    return (N == 1) ? res : -1;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll Q = II();
    while(Q--){
        ll N = II();
        cout << solve(N) << "\n";
    }

    return 0;
}
