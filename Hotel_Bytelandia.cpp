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
	vector<pair<int,int>> a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back({x,1});
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back({x,0});
	}

	sort(all(a));

	int count = 0;
	int ans = 0;

	for(pair<int,int> p:a){
		if(p.second==1){
			count++;
		}
		else{
			count--;
		}
		ans = max(ans,count);
	}

	cout<<ans<<"\n";
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