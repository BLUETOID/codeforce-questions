#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

bool isVowel(char s){
	s = tolower(s);
	if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='y'){
		return true;
	}
	return false;
}
void solve() {
	string s;
	cin>>s;
	string result ="";
	int i =0;
	while(i<s.length()){
		
		if(!isVowel(s[i])){
			result+='.';
			result+=tolower(s[i]);
			i++;
		} 
		else{
			i++;
		}
		
	}
	cout << result << "\n";
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