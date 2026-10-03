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

int helper(vector<string>&order,string &cow){
	for(int i=0;i<order.size();i++){
		if(order[i]==cow){
			return i;
		}
	}
	return -1;
}

void solve() {
	int n;
	cin >> n;
	vector<pair<string, string>> constraints(n);
	for (int i = 0; i < n; i++) {
		string c1,c2,dummy;
		cin>>c1;
		cin>>dummy>>dummy>>dummy>>dummy;
		cin>>c2;
		constraints[i] = {c1, c2};
	}

	vector<string> cows{
		"Beatrice",
		"Belinda",
		"Bella",
		"Bessie",
		"Betsy",
		"Blue",
		"Buttercup",
		"Sue"
	};
	sort(all(cows));
	do {
		bool valid = true;
		for (auto [c1, c2] : constraints) {
			int pos1 = helper(cows,c1);
			int pos2 = helper(cows,c2);
			if (abs(pos1 - pos2) != 1) {
				valid = false;
				break;
			}
		}
		if (valid) {
			for (const auto &cow : cows) {
				cout << cow << "\n";
			}
			return;
		}
	}while (next_permutation(all(cows)));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	setIO("lineup"); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}