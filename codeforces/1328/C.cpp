#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N; string s;
		cin >> N >> s;
		bool mag = false;
		vector<char> a(N, '*'), b(N, '*');
		for(int i=0; i<N; i++) {
			if(s[i] == '0')
				a[i] = b[i] = '0';
			else if(s[i] == '1' && mag)
			    a[i] = '0', b[i] = '1';
			else if(s[i] == '1')
				a[i] = '1', b[i] = '0', mag = true;
			else if(s[i] == '2' && mag)
				a[i] = '0', b[i] = '2';
			else 
			    a[i] = b[i] = '1';
		}
		for(char & c : a) cout << c; cout << "\n";
		for(char & c : b) cout << c; cout << "\n";
	}
	return 0;
}