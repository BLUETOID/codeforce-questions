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
	vector<string>grid(n);
	long long MOD = 1e9 + 7;
	for(int i=0;i<n;i++){
		cin>>grid[i];
	}

	if(grid[0][0]=='*' || grid[n-1][n-1]=='*'){
		cout<<0;
		return;
	}

	vector<vector<long long>>dp(n,vector<long long>(n,-1));

	dp[0][0]=1;

	for(int i=1;i<n;i++){
		dp[i][0]=(grid[i][0]=='*')?0:dp[i-1][0];

	}
	for(int i=1;i<n;i++){
		dp[0][i]=(grid[0][i]=='*')?0:dp[0][i-1];
		
	}

	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(grid[i][j]=='*'){
				dp[i][j]=0;
				continue;
			}
			dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
		}
	}

	cout<<dp[n-1][n-1]<<"\n";
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