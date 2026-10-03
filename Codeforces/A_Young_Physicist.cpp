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
	int sum_x = 0;
	int sum_y = 0;
	int sum_z = 0;
	while(n--){
		int x, y, z;
		cin>>x>>y>>z;
		sum_x += x;
		sum_y += y;
		sum_z += z;
	}
	if(sum_x == 0 && sum_y == 0 && sum_z == 0){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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