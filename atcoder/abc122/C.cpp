#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;


#define F first
#define S second

#define ERR 1e-9

#if !ONLINE_JUDGE && !EVAL
    #define dbg_var(x) cerr << #x << ": " << x << "\n";
    #define dbg_iter(x, y) cerr  << #x << ": " << print_iterable(x, y) << "\n";
#else
    #define dbg_var(x)
    #define dbg_iter(x, y)
#endif // ONLINE_JUDGE

template <typename T1, typename T2>
string print_iterable( T1 begin_iter, T2 end_iter){
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

void aggMax(int & res, int x){ if(x > res)res = x; }
void aggMin(int & res, int x){ if(x < res)res = x; }

int II(){ int i; cin >> i; return i; }
void OI(int i){ cout << i; }

// constraints
const int MAXN = 10e5 + 10;

int prefix_sum[MAXN];

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    int N = II(), Q = II();
    string s; cin >> s;

    for(int i=1; i<N; i++){
        if(s[i] == 'C' && s[i-1] == 'A') prefix_sum[i] = prefix_sum[i-1] + 1;
        else prefix_sum[i] = prefix_sum[i-1];
    }

    while(Q--){
        int l = II()-1, r = II()-1;
        int res = prefix_sum[r];
        if(l > 0) res -= prefix_sum[l-1];
        if(l > 0 && s[l-1] == 'A' && s[l] == 'C') res--;
        cout << res << "\n";
    }


    return 0;
}
