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
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	long long prefixSum=0;
	long long good_subarray = 0;
	map<long long,long long>freq;

	freq[0]=1;
	for(long long i=1;i<=n;i++){
		prefixSum+=(s[i-1]-'0');
		long long dr = prefixSum-i;

		if(freq.count(dr)){
			good_subarray+=freq[dr];
		}

		freq[dr]++;
	}

	cout<<good_subarray<<"\n";

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// setIO(""); 

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}