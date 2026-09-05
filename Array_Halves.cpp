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
	n = n*2;
	vi a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int count = 0;
	int result = 0;
	for(int i=0;i<n;i++){
		if(a[i]>n/2){
			count++;
		}else{
			result += count;
		}
	}
	cout << result << "\n";
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