#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	ll a,b;
	cin>>a>>b;
	ll sum = a+b;
	if(sum % 3 !=0){
		cout<<"NO"<<endl;
		return;
	}
	ll x = (2*b - a)/3;
	ll y = (2*a - b)/3;
	if(x>=0 && y>=0){
		cout <<"YES"<<endl;
	}
	else cout <<"NO"<<endl;
	
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