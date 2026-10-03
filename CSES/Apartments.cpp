#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void setIO(string name = "") {
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

void solve() {
	ll n,m,k;
	cin>>n>>m>>k;
	vector<ll>desired_size(n);
	for(int i=0;i<n;i++){
		cin>>desired_size[i];
	}
	sort(all(desired_size));
	vector<ll>available_size(m);
	for(int i=0;i<m;i++){
		cin>>available_size[i];
	}
	sort(all(available_size));

	ll i =0;
	ll j = 0;
	ll count = 0;
	while(i<n && j<m){
		int least = desired_size[i]-k;
		int most = desired_size[i]+k;
		if(available_size[j]>=least && available_size[j]<=most){
			count++;
			i++;
			j++;
		}
		else if(desired_size[i]>available_size[j]){
		    j++;
		}
		else{
		    i++;
		}
	}
	cout<<count<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// setIO(""); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}