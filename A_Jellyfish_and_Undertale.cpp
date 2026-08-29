#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	ll a,b,m;
	cin>>a>>b>>m;
	vector<ll> arr(m);
	for(ll i=0;i<m;i++){
		cin>>arr[i];
	}
	ll ans = b;
	for(ll i=0;i<m;i++){
		ans+=min(a-1,arr[i]);
	}
	
	cout<<ans<<"\n";
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