#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n;
	cin>>n;
	vector<int> a(n);

	int sum = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	int current_sum = 0;

	int diff = INT_MAX;
	for(int i=0;i<n;i++){
		current_sum += a[i];
		diff = min(diff, abs(current_sum - (sum - current_sum)));
	}
	cout << diff << "\n";
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