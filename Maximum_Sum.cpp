#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n,k;
	cin>>n>>k;
	vector<int>ar(n);
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		sum+=ar[i];
	}
	vector<int>prefix_sum_first(n+1,0);
	for(int i=1;i<=n;i++){
		prefix_sum_first[i]=prefix_sum_first[i-1]+ar[i-1];
	}
	vector<int>prefix_sum_last(n+1,0);
	for(int i=n-1;i>=0;i--){
		prefix_sum_last[i]=prefix_sum_last[i+1]+ar[i];
	}
	int sum_1=sum-prefix_sum_first[k+1];
	int sum_2=sum-prefix_sum_last[n-k];
	if(sum_1>sum_2){
		sum-=sum_1;
	}
	else{
		sum-=sum_2;
	}
	
	cout<<sum<<"\n";
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