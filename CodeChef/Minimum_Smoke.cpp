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
	vi a(n);
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	long long smoke = 0;

	while(sz(a)>1){
		int min_color  = (a[0]+a[1])%100;
		int min_color_index=0;
		for (int i = 0; i < sz(a)-1; i++) {
			if((a[i]+a[i+1])%100 < min_color){
				min_color = (a[i]+a[i+1])%100;
				min_color_index = i;
			}
		}
		smoke+=a[min_color_index]*a[min_color_index+1];
		a[min_color_index] = min_color;
		a.erase(a.begin()+min_color_index+1);
	}
	cout<<smoke<<endl;
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
