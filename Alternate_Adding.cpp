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
	int operation = 0;
	int operation2 = 0;
	int i=0;

	//i want to count the range of all the alternate negative and positive number in array 
	while(i<n){
		while(a[i]<0 && a[i+1]<0 && i<n-1){
			operation++;
			i+=2;
		}
		while(a[i]>0 && a[i+1]>0 && i<n-1){
			operation2++;
			i+=2;
		}
		i++;
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