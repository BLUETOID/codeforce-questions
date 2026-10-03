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
	int n,q;
	cin>>n>>q;
	vector<vector<int>>cows(4,vector<int>(n+1,0));

	for(int i=1;i<=n;i++){
		int current;
		cin>>current;
		for(int j=1;j<=3;j++){
			cows[j][i]=cows[j][i-1];
		}
		cows[current][i]++;
	}

	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<(cows[1][b]-cows[1][a-1]) <<" "
			<<(cows[2][b]-cows[2][a-1]) <<" "
			<<(cows[3][b]-cows[3][a-1])<<"\n";
	}



}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	setIO("bcount"); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}