#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N; 
		cin >> N;
		int res = 0;
		while(N > 0) {
			int tmp = (N / 10 == 0 ? N : N / 10 * 10);
			res += tmp;
			N += - tmp + tmp / 10; 
		}
		cout << res << "\n";
	}
	return 0;
}