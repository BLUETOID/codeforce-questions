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

// void solve() {
// 	int n;
// 	cin>>n;
// 	vi dp(n+1,1e9);
// 	dp[0]=0;
// 	for(int i=1;i<=n;i++){
// 		string a = to_string(i);
// 		for(auto c:a){
// 			int digit = c-'0';
// 			if(digit!=0){
// 				dp[i]=min(dp[i],dp[i-digit]+1);
// 			}
// 		}
// 	}

// 	cout<< dp[n]<<endl;
// }

void solve(){
	int n;
	cin>>n;

	int steps=0;

	while(n>0){
		int max_digit=0;
		int temp = n;
		while(temp > 0){
			max_digit = max(max_digit,temp%10);
			temp/=10;
		}
		n-=max_digit;
		steps++;
	}

	cout<<steps<<endl;
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