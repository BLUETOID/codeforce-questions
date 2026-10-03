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
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max_diff = -1e9;
	for(int i=1;i<n;i++){
		max_diff = max(max_diff, a[i]-a[0]);
	}
	for(int i=0;i<n-1;i++){
		max_diff = max(max_diff, a[n-1]-a[i]);
	}
	for(int i=0;i<n;i++){
		max_diff = max(max_diff, a[(i-1+n)%n] - a[i]);
	}
	cout << max_diff << "\n";
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


//The solution is first we fix first element and find the best difference  
//then we fix last element and find the best difference 
//then we find the best difference between adjacent elements in circular manner and take the maximum of all three.