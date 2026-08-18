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
	string R;
	string B;
	cin >> R >> B;
	int r = 0;
	int b = 0;
	for (int i = 0; i < n; i++) {
		if (R[i] > B[i]) {
			r++;
		} else if (R[i] < B[i]) {
			b++;
		}
	}
	if (r > b) {
		cout << "RED" << endl;
	} else if (b > r) {
		cout << "BLUE" << endl;
	} else {
		cout << "EQUAL" << endl;
	}
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