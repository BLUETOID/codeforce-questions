#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n;
	cin >> n;
	int res = 0;
	vi a(n);
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		res = __gcd(res, x - i);
	}
	

	cout << abs(res) << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}


//needed the hint to solve this 
//basically we are finding the gcd of |p1 - 1|, |p2 - 2|, |p3 - 3|, ..., |pn - n| that's it