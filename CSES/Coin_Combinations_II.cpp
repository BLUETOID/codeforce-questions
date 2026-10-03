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
	int n,x;
	cin>>n>>x;
	vi coins(n);
	for(int i=0;i<n;i++){
		cin>>coins[i];
	}
	vi dp(x+1,0);
	dp[0]=1;

	int MOD = 1e9+7;

	//similar question to coin comb 1 but here we have to maintain order so we can use one coin only before the next means we use 
	//coin 2 and check can we get the result and then we check combination of 2,3 and so on..

	for(int c:coins){
		for(int j=c;j<=x;j++){
			dp[j]=(dp[j]+dp[j-c])%MOD;
		}
	}

	cout << dp[x]<<"\n";
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