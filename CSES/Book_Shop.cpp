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
	cin>>n>>x;//number and totalPrice

	vi price(n);
	vi pages(n);

	for(int i=0;i<n;i++){ //input of prices 
		cin>>price[i];
	}

	for(int i=0;i<n;i++){ // input of pages
		cin>>pages[i];
	}


	vi dp(x+1,0);//we will build dp for each prices

	

	for(int i=0;i<n;i++){
		for(int w = x; w>=price[i];w--){
			dp[w]=max(dp[w],dp[w-price[i]]+pages[i]);
		}
	}

	cout<<dp[x]<<"\n";

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