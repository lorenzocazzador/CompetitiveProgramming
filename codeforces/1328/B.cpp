#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N, K;
		cin >> N >> K;
		int p1 = N-2, i = 0, j = 1;
		while(i+j < K) p1--, i += j++;
		int p2 = N-1;
		while(i+1 != K) i++, p2--;
		string s(N, 'a');
		s[p1] = s[p2] = 'b';
		cout << s << "\n";
	}
	return 0;
}