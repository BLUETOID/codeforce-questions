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
	vi arr(n+2);
	vi prefixGCD(n+2,0);
	vi suffixGCD(n+2,0);

	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	for(int i=1;i<=n;i++){
		prefixGCD[i]=gcd(prefixGCD[i-1],arr[i]);
	}
	for(int i=n;i>=1;i--){
		suffixGCD[i]=gcd(suffixGCD[i+1],arr[i]);
	}

	int res = 0;

	for(int i=1;i<=n;i++){
		res = max(res,gcd(prefixGCD[i-1],suffixGCD[i+1]));
	}

	cout<<res<<"\n";

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