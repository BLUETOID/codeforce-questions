#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	ll n;
	cin>>n;
	if((n*(n+1))%4 == 0){
		cout<<"YES"<<endl;
		set<ll>a,b;
		ll x = (n*(n+1))/4;
		for(ll i=1;i<=n;++i)a.insert(i);
		for(ll i=n;i>=1;--i){
			if(i<=x){
				b.insert(i);
				x-=i;
				a.erase(i);
		}
		}
		cout<<sz(a)<<endl;
		for(auto &i:a)cout<<i<<" ";
		cout<<endl;
		cout<<sz(b)<<endl;
		for(auto &i:b)cout<<i<<" ";
		cout<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}