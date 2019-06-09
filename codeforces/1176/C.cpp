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

    int N = II();
    vi V(N);
    for(int & x : V) x = II();

    multiset<int> s;
    map<int, int> m = { {8, 4}, {15, 8}, {16, 15}, {23, 16} };
    int res = 0;
    for(int & x : V) {
        if(x == 4){
            s.insert(x);
        } else if (x == 42) {
            auto it = s.find(23);
            if(it == s.end())
                res++;
            else
                s.erase(it);
        } else {
            auto it = s.find(m[x]);
            if(it == s.end())
                res++;
            else {
                s.erase(it);
                s.insert(x);
            }
        }
        //dbg_iter(s.begin(), s.end());
    }
    map<int, int> m2 = { {4, 1}, {8, 2}, {15, 3}, {16, 4}, {23, 5} };
    for(int x : s) {
        res += m2[x];
    }
    cout << res << "\n";
    return 0;
}
