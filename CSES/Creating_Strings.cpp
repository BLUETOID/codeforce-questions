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
	string s;
	cin >> s;
	int n = s.size();

	unordered_map<char,int> freq;
	for(char c : s){
		freq[c]++;
	}

	int fact = 1;
	for(int i = 1; i <= n; i++) {
		fact *= i;
	}

	for(auto [c,f] : freq){
		for(int i = 1; i <= f; i++){
			fact /= i;
		}
	}

	sort(begin(s), end(s));

	cout << fact << "\n";
	do {
		cout << s << "\n";
	} while (next_permutation(all(s)));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// setIO(""); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}