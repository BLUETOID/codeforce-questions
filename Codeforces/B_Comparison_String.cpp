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
	string s;
	cin>>s;
	int first=0;
	int max_first=0;
	int second=0;
	int max_second=0;
	for(int i=0;i<n;i++){
		if(s[i]=='>'){
			second=0;
			first++;
			max_first=max(max_first,first);
		}
		else{
			first=0;
			second++;
			max_second=max(max_second,second);
		}
	}
	cout<<max(max_first,max_second)+1<<"\n";
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