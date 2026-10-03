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
	vector<vector<int>> matrix(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	int max_trace = 0;
	for (int i = 0; i < n; i++) {
		int trace = 0;
		for(int j=i,k=0;j<n && k<n;j++,k++){
			trace+=matrix[j][k];
		}
		max_trace = max(max_trace, trace);
	}
	for(int j=0;j<n;j++){
		int trace = 0;
		for(int i=0,k=j;i<n && k<n;i++,k++){
			trace+=matrix[i][k];
		}
		max_trace = max(max_trace, trace);
	}
	cout << max_trace << "\n";
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