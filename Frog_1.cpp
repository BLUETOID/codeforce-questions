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
	vi a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	vi dp(n+1, 0);
	dp[1]=abs(a[0]-a[1]);
	for(int i=2;i<n;i++){
		dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]), dp[i-2]+abs(a[i]-a[i-2]));
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