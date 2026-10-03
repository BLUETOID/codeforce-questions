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
	int n;
	cin>>n;
	vector<string>block;
	while(n--){
		string a,b;
		cin>>a>>b;
		block.push_back(a);
		block.push_back(b);
	}
	int hash[26]={0};

	for(int i=0;i<block.size();i+=2){
		int hash_a[26]={0};
		int hash_b[26]={0};

		for(int j=0;j<block[i].size();j++){
			hash_a[block[i][j]-'a']++;
		}

		for(int j=0;j<block[i+1].size();j++){
			hash_b[block[i+1][j]-'a']++;
		}

		for(int j=0;j<26;j++){
			hash[j]+=max(hash_a[j],hash_b[j]);
		}
	}
	
	for(int i=0;i<26;i++){
		cout<<hash[i]<<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	setIO("blocks"); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}