#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	bool even_0 = true;
	bool even_1 = true;
//we are counting that can this array sattisfies for even index and odd index
//like 1010101 ans so one or 01010101 a
//so there could max be 4 ways to satisfy the condition
//2 from even index and 2 from odd index


//intially i have thought of condition that si must not equal si+2 that is the right way 
//but we have to check for both odd and even indecies seperatly and can we get out most of it or not

	for(int i=0;i<n;i+=2){
		int expected_0 = (i/2)%2;
		int expected_1 = 1 - expected_0;

		if(s[i]!='?'){
			int value = s[i]-'0';
			if(value!=expected_0){
				even_0 = false;
			}
			if(value!=expected_1){
				even_1 = false;
			}
		}
	}
	int even_ways = even_0 + even_1;


	bool odd_0 = true;
	bool odd_1 = true;
	for(int i=1;i<n;i+=2){
		int expected_0 = ((i-1)/2)%2;
		int expected_1 = 1 - expected_0;

		if(s[i]!='?'){
			int value = s[i]-'0';
			if(value!=expected_0){
				odd_0 = false;
			}
			if(value!=expected_1){
				odd_1 = false;
			}
		}
	}
	int odd_ways = odd_0 + odd_1;

	cout << even_ways * odd_ways << "\n";
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