#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; string s;
    cin >> N >> s;
    int first = INT_MAX, c = 0, o = 0, res = 0;
    stack<int> clo;
    for(int i=0; i<N; i++) {
        if(s[i] == ')') {
            if(o) o--;
            else {
                c++;
                first = min(first, i);
            }
        } else {
            if(c) {
                c--;
                if(c == 0) { 
                    res += i - first + 1;
                    first = INT_MAX;
                }
            } else o++;
        }
    }
    cout << (o || c ? -1 : res) << "\n";
}