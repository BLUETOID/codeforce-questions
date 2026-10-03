#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	int n;
	cin>>n;
	vector<vector<bool>>pos(4,vector<bool>(4,false));
	pos[1][1]=true;
	pos[2][2]=true;
	pos[3][3]=true;

	int maxCount = 0;

	vector<int>count(4,0);

	while(n--){
		int a,b,g;
		cin>>a>>b>>g;
		for(int i=1;i<=3;i++){
			swap(pos[i][a],pos[i][b]);
			if(pos[i][g]){
				count[i]++;
			}
		}
	}
	maxCount = max({count[1],count[2],count[3]});
	
	cout <<maxCount<<endl;
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