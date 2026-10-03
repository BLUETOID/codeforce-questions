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
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(all(arr));
	arr.erase(unique(all(arr)),arr.end());

	int m = arr.size();

	int best=0;
	int current=0;
	for(int i=0;i<m;i++){
		if(i==0 || arr[i]!=arr[i-1]+1){
			current=0;
		}
		current++;
		best=max(best,current);
	}
	cout<<best<<endl;
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