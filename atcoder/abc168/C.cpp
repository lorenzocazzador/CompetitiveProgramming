#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define F first
#define S second
#define sz(x) (int)x.size()
#define db(x) cerr << #x << ": " << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double A, B, H, M;
    cin >> A >> B >> H >> M;
    H = H * 30.0 + M / 2;
    M *= 6.0;
    double angle = (H > M ? H-M : M-H);
    angle = angle * M_PI / 180.0;
    cout << fixed << setprecision(20) << sqrt(A*A + B*B - 2*A*B*cos(angle));
}
