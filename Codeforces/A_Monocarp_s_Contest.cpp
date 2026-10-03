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
	vi a(n);
	int hash_one = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0 || i==n-1)continue;
		if(a[i]==0)hash_one++;
	}

	if(a[0]==0 && a[n-1]==0){
		cout<<0<<endl;
	}
	else if(a[0]==0 && a[n-1]==1 && hash_one>0){
		cout<<1<<endl;
	}
	else if(a[0]==1 && a[n-1]==0 && hash_one >0){
		cout<<1<<endl;
	}
	else if(a[0]==1 && a[n-1]==1 && hash_one > 1){
		cout<<2<<endl;
	}
	else{
		 cout<<-1<<endl;
	}


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