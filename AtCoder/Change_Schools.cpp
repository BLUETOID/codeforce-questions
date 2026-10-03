#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n,k;
	cin>>n>>k;
	vi a(n);
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	int maxCount = 0;
	for(const auto& [val, count] : mp){
		maxCount = max(maxCount, count);
	}

	int ans = 0;
	for(const auto & [val, count] : mp){
		if(maxCount - count <= 1){
			ans++;
		}
	}

	cout << ans << "\n";

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