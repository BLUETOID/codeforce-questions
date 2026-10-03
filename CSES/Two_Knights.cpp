#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	ll n;
	cin>>n;
	for(ll k=1;k<=n;k++){
		ll ans = (k*k*(k*k-1))/2 - 4*(k-1)*(k-2);
		cout<<ans<<"\n";
	}
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