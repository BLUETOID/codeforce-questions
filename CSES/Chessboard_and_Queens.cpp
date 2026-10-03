#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void setIO(string name = "") {
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

void solve() {
	vector<string> board(8);
	for (int i = 0; i < 8; i++) {
		cin >> board[i];
	}

	int ans = 0;

	vector<int> pos {
		0, 1, 2, 3, 4, 5, 6, 7
	};

	do{

		bool isvalid = true;

		for(int i=0;i<8;i++){
			if(board[i][pos[i]]=='*'){
				isvalid = false;
				break;
			}
		}

		if(!isvalid) continue;

		for(int i=0;i<8;i++){
			for(int j=i+1;j<8;j++){
				if(abs(i-j) == abs(pos[i]-pos[j])){
					isvalid = false;
					break;
				}
			}
			if(!isvalid) break;
		}

		if(isvalid) ans++;


	}while(next_permutation(all(pos)));
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// setIO(""); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}