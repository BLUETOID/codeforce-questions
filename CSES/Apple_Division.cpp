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

ll helper(int n,int index,const vll& a, ll sum1, ll sum2){
	if(index == n )return abs(sum1-sum2);

	return min(helper(n,index+1,a,sum1+a[index],sum2),helper(n,index+1,a,sum1,sum2+a[index]));
}

void solve() {
	int n;
	cin >> n;
	vll a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	cout << helper(n,0,a,0,0) << "\n";
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