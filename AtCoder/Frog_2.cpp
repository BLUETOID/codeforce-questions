#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for(int i = a; i < b; i++)

void solve() {
	int n, k;
	cin >> n >> k;
	vi a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	vi dp(n+1,1e9);
	dp[0]=0;
	for(int i=1;i<n;i++){
		for(int j=1;j<=k;j++){
			if(i-j>=0){
				dp[i] = min(dp[i], dp[i-j]+abs(a[i]-a[i-j]));
			}
		}
	}
	cout << dp[n-1] << "\n";
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