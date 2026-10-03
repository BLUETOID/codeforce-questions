#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n,q;
	cin >> n >> q;
	vector<ll>arr(n+1,0);
	vector<ll>prefix(n+1,0);
	for(int i=1;i<=n;i++){
		cin >> arr[i];
		prefix[i]=prefix[i-1]+arr[i];
	}

	ll total_sum = prefix[n];
	while(q--){
		int l,r;
		ll k;
		cin>>l>>r;
		cin>>k;

		ll old_segment = prefix[r]+prefix[l-1];
		ll new_segment = (r-l+1)*k;
		ll new_total = total_sum - old_segment + new_segment;

		if(new_total %2==0){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
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