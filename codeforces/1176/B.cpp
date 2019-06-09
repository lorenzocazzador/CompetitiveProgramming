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
    #define dbg_var(x) cerr << #x << ": " << x << "\t";
    #define dbg_iter(x, y) cerr  << #x << ": " << prll_iterable(x, y) << "\n";
    #define new_line cerr << "\n";
#else
    #define dbg_var(x)
    #define dbg_iter(x, y)
    #define new_line
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

ll solve(ll N, vi V){
    ll uno = 0, due = 0, res = 0;
    for(ll x : V) {
        ll r = x % 3;
        if(r == 0) res++;
        else if (r == 1) uno++;
        else due++;
    }
    int tmp = min(uno, due);
    res += tmp;
    //dbg_var(res); dbg_var(uno); dbg_var(due); new_line;
    uno -= tmp;
    due -= tmp;
    //dbg_var(res); dbg_var(uno); dbg_var(due); new_line;
    if(due > 0) res += due/3;
    if(uno > 0) res += uno/3;
    //dbg_var(res); dbg_var(uno); dbg_var(due); new_line;
    return res;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll Q = II();
    while(Q--){
        ll N = II();
        vi V(N);
        for(ll & x : V) x = II();
        cout << solve(N, V) << "\n";
    }
    return 0;
}
