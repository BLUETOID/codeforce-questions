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
	int n,m;
	cin>>n>>m;
	vector<int>limit(100);
	int current_index_1=0;
	while(n--){
		int a,b;
		cin>>a>>b;
		fill(limit.begin()+current_index_1,limit.begin()+a+current_index_1,b);
		current_index_1+=a;
	}
	vector<int>bassie(100);
	int current_index_2=0;
	while(m--){
		int a,b;
		cin>>a>>b;
		fill(bassie.begin()+current_index_2,bassie.begin()+a+current_index_2,b);
		current_index_2+=a;
	}

	int max_speed_limit=0;
	int speed_limit=0;
	for(int i=0;i<100;i++){
		if(bassie[i]>limit[i]){
			speed_limit=bassie[i]-limit[i];
			max_speed_limit=max(max_speed_limit,speed_limit);
		}
	}

	cout<<max_speed_limit<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	setIO("speeding"); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}