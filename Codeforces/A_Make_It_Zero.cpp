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
	int xor_sum = 0;
	vi arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	if(n%2 == 0){
		cout<<2<<endl;
		cout << 1 <<" "<<n<<endl;
		cout << 1 <<" "<<n<<endl;
	}
	else{
		cout<<4<<endl;
		cout << 1 <<" "<<n-1<<endl;
		cout << 1 <<" "<<n-1<<endl;
		cout << n-1 <<" "<<n<<endl;
		cout << n-1 <<" "<<n<<endl;
	}
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