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
	vector<int> a(n);
	int count = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]!=0){count++;}
	for(int i=1;i<n;i++){
		if(a[i]!=0 && a[i-1]==0){
			count++;
		}
	}
	cout << (count>2?2:count) << "\n";
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