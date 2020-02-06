#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N; 
		cin >> N;
		bool even = 0, odd = 0;
		for(int i=0; i<N; i++) {
			int x;
			cin >> x;
			even = even || (x % 2 == 0);
			odd = odd || (x % 2);
		} 
		if((odd && N%2) || (even && odd && N%2==0))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}