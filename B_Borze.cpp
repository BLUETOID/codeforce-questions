#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	string s;
	cin>>s;
	int n = sz(s);
	string ans = "";
	for(int i=0;i<n;i++){
		if(s[i]=='.'){
			ans += '0';
		}else if(s[i]=='-'){
			if(i+1<n && s[i+1]=='.'){
				ans += '1';
				i++;
		}else if(i+1<n && s[i+1]=='-'){
				ans += '2';
				i++;
			}
		}
	}
	cout<<ans<<"\n";
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