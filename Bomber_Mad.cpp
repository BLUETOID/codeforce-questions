#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int h,w,k;
	cin>>h>>w>>k;
	
	vector<vector<char>> a(h, vector<char>(w));
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>a[i][j];
		}
	}

	vector<pair<int,int>> dangerSpots;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(a[i][j]=='#'){
				dangerSpots.push_back({i,j});
			}
		}
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