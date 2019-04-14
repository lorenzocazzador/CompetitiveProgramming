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

    int N = II(), K = II();
    string s; cin >> s;

    vi num; int cons = 1;
    bool ones = (s[0] == '1');

    for(int i=1; i<N; i++){
        if(s[i] == '1') ones = true;
        if(s[i] == s[i-1]) cons++;
        else{
            if(num.size() == 0 && s[0] == '0') num.push_back(0);
            num.push_back(cons);
            cons = 1;
        }
    }
    num.push_back(cons);
    if(ones && s[N-1] == '0') num.push_back(0);

    /*for(int & x : num) cout << x << " ";
    cout << "\n";*/

    K = (K*2)+1;
    //cout << "K: " << K << "\n";

    int act = 0, res = 0;

    if(num.size() == 1){
        cout << num[0] << "\n";
        return 0;
    }
    if(num.size() < K){
        for(int & x : num) res += x;
        cout << res << "\n";
        return 0;
    }
    for(int i=0; i<num.size(); i++){
        act += num[i];
        if(i-K+1 >= 0){
            if( (i-K+1)%2 == 0 ) res = max(res, act);
            act -= num[i-K+1];
        }
    }

    cout << res << "\n";
    return 0;
}
