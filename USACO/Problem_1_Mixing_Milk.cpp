#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void setIO(string name = "") {
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

void solve() {
	int c1, m1;
	cin >> c1 >> m1;

	int c2, m2;
	cin >> c2 >> m2;

	int c3, m3;
	cin >> c3 >> m3;

	int i = 0;
	while (i < 100) {
		
		int amt1 = min(m1, c2 - m2); 
		m1 -= amt1;
		m2 += amt1;
		i++;
		if (i == 100) break;

		int amt2 = min(m2, c3 - m3);
		m2 -= amt2;
		m3 += amt2;
		i++;
		if (i == 100) break;

		int amt3 = min(m3, c1 - m1);
		m3 -= amt3;
		m1 += amt3;
		i++;
	}

	cout << m1 << "\n" << m2 << "\n" << m3 << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	setIO("mixmilk"); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
