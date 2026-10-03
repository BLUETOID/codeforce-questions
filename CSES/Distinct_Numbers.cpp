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
	int n;
	cin>>n;
	set<int>a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.insert(x);
	}
	cout<<a.size()<<"\n";
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