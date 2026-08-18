#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n;
	cin >> n;
	if(n<4 && n!=1){
		cout<<"NO SOLUTION"<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(i%2==0){
			cout<<i<<" ";
		}
	}
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			cout<<i<<" ";
		}
	}
	cout << endl;
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