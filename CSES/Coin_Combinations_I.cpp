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

	int MOD = 1e9+7;


	//this is the same problem as minimizing coin but instead of minimizing we are taking all the ways 

	//so to costruct 0 coin we have 1 ways that we don't take any coin so one ways 



	vi dp(x+1);
	dp[0]=1;//base case

	// waht we are doing here we are adding all the possible ways to our dp not the shortest one it is again building dp from 
	//the coin 1 can we build coin 1 actually we if we take example 2 3 5 coins we can't so we do take no coin so same as dp[0]
	//now for dp[2] can we build with coin 1 yes in 1 ways again can we build using coin 2 yes 1 ways so 2 ways dp[2]=2 

	//similary we are building till x so our answer is dp[x]

	for(int i=1;i<=x;i++){
		for(int j=0;j<n;j++){
			if(arr[j]<=i){
				dp[i]=(dp[i]+dp[i-arr[j]])%MOD;
			}
		}
	}

	cout <<dp[x]<<endl;
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