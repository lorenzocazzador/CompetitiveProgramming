#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		vector<int> T(N);
		for(int & x: T) cin >> x;
		vector<int> R(N);
		int K = 0;
		R[0] = 1;
		for(int i=1; i<N; i++) {
			if(T[i-1] == T[i]) R[i] = R[i-1];
			else R[i] = (R[i-1] == 1 ? 2 : 1);
			
			if(i == N-1) {
				if(T[0] != T[i] && R[i] == 1) {
					if(T[i-1] == T[i]) R[i] = 2;
					else {
						R[i] = 2;
						bool v = false;
						for(int j=i-1; j>=0 && !v; j--) {
							if(R[j] == R[j+1] && T[j] != T[j+1]) {
								R[j] = (R[j] == 1 ? 2 : 1);
							} else v = true;
						}
						if(R[0] == 2) {
							R[0] = 3;
							K = 3; 
						}
						
					}
				}
				
			}
			K = max(K, R[i]);
		}
		cout << K << "\n";
		for(int & x : R) cout << x << " ";
		cout << "\n";
	}
	
	return 0;
}