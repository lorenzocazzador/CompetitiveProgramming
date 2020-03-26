#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int A, B;
		cin >> A >> B;
		cout << (A/B + (A%B != 0))*B - A << "\n";
	}
	return 0;
}