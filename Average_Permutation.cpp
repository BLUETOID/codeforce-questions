#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())


//initially i was doing wrong
//what i was doing was first iterating with n-1 to 1 then pushing the last element but
//the right approach is to put the first element and last element as largest one with weight 1 means they only appear once
//then place weight of 2 to the second largest and second smallest and so on
//then rest have weight of 3 means they appear 3 times in the permutation

void solve() {
	int n;
	cin >> n;

	cout << n<<" "<<n-2<<" ";
	for(int i=1;i<=n-3;i++){
		cout<<i<<" ";
	}

	cout <<n-1<<" "<<"\n";
	
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