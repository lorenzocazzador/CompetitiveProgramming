#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){
        int N, S;
        cin >> N >> S;  
        
        vector<int> A(N);
        for(int & x : A)
            cin >> x;

        int i_max, max = 0, sum = 0, i = 0;
        while(i < N && sum <= S) {
            sum += A[i];
            if(A[i] > max) {
                max = A[i];
                i_max = i;
            }
            i++;
        }
        int res = 0;
        for(int j=i; j<N; j++) 
            if(sum - max + A[j] <= S) {
                res = i_max+1;
                break;
            }

        cout << res << "\n";
    }
}