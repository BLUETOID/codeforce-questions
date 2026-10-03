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
	ll n,q;
	cin>>n>>q;
	vll arr(n);
	vll prefix_sum(n+1,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=1;i<=n;i++){
		prefix_sum[i]=prefix_sum[i-1]+arr[i-1];
	}
	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<prefix_sum[b]-prefix_sum[a]<<"\n";
	}
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