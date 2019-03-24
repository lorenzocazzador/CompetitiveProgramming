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
#define MAXN 1000000

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int res = 0, act = 0;

    for(int i=0; i<int(s.size()); i++){
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'T' || s[i] == 'G') act++;
        else{
            res = max(act, res);
            act = 0;
        }
    }

    res = max(res, act);
    cout << res << "\n";

    return 0;
}
