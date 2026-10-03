#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n,m;
	cin>>n>>m;

	vector<bool> available(26,false);

	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		available[toupper(s[0])-'A'] = true;
	}

	vector<string>abbr(m);
	for(int i=0;i<m;i++){
		cin>>abbr[i];
	}

	vector<bool>used(m,false);
	bool changed;

	do{
		changed = false;
		for(int i=0;i<m;i++){
			if(!used[i]){
				bool can_make = true;

				for(char c:abbr[i]){
					if(!available[c-'A']){
						can_make=false;
						break;
					}
				}

				if(can_make){
					used[i]=true;
					available[abbr[i][0]-'A'] = true;
					changed=true;
				}
			}
		}
	}while(changed);

	bool possible = true;
	for(bool b : used){
		if(!b){
			possible=false;
			break;
		}
	}

	cout << (possible?"YES" : "NO") << "\n";
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