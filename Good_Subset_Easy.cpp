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
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int xor_operation=a[0];
	int and_operation=a[0];
	int size=1;

	for(int i=1;i<n;i++){
		xor_operation^=a[i];
		and_operation&=a[i];
		if(xor_operation<and_operation){
			size++;
		}
		else{
			xor_operation=a[i];
			and_operation=a[i];
			size=1;
		}
	}
	cout<<size<<endl;
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