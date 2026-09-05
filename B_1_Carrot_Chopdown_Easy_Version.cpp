#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n,m;
	cin>>n>>m;
	vector<int> freq(m+2,0);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		freq[x]++;
	}

	vector<int> dp(m+2,0);
	for(int i=m;i>=1;i--){
		dp[i]=dp[i+1]+freq[i];
	}

	int maximum = 0;
	for(int i=1;i<=m;i++){
		int current_max = dp[i];
		if(2*i<=m){
			current_max+=freq[2*i];
		}
		maximum = max(maximum, current_max);
	}
	cout<<maximum<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}