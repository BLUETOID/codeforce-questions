#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	long long n;
	cin>>n;
	if(n<4 || n%2!=0){
		cout<<-1<<endl;
		return;
	}
	long long low = (n+5)/6;
	long long high = n/4;
	cout << low << " " << high << "\n";
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