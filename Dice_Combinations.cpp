#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;

	vector<int> dp(n + 1, 0);

	dp[0]=1;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=6;j++){
			if(i-j>=0){
				dp[i] = (dp[i] + dp[i-j]) % MOD;
			}
		}
	}
	cout << dp[n] << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}