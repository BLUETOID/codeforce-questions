#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> army(m+1);
	for(int i=0;i<m+1;i++){
		cin>>army[i];
	}
	int fedor = army[m];
	int count = 0;
	for(int i=0;i<m;i++){
		if(__builtin_popcount(army[i]^fedor)<=k){
			count++;
		}
	}
	cout << count << "\n";
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