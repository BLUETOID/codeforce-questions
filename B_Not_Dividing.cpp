#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i =0;i<n;i++){
		if(a[i]==1){
			a[i]++;
		}
	}
	for(int i=1;i<n;i++){
		if(a[i]%a[i-1]==0){
			a[i]++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout << "\n";
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