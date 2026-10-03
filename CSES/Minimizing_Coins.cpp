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
	vi arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	vi dp(x+1,1e9);

	dp[0]=0;

	for(int i=1;i<=x;i++){
		for(int j=0;j<n;j++){
			if(arr[j]<=i){
				dp[i]=min(dp[i],dp[i-arr[j]]+1);
			}
		}
	}

	cout << (dp[x]<1e9 ? dp[x]:-1)<<"\n";
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