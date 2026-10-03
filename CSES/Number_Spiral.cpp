#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	ll y,x;
	cin>>y>>x;
	ll k = max(x,y);
	ll ans = (k-1)*(k-1);
	if(k&1){
		ans+=(x+(k-y));
	}
	else{
		ans+=(y+(k-x));
	}
	cout<<ans<<endl;
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