#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	string s;
	
	for(int i=1;i<=12;i++){
		if(i==a || i==b){s+="a";}
		if(i==c || i==d){s+="b";}
		
	}
	cout << (s=="abab" || s =="baba" ? "YES\n" :"NO\n");
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


//THE LOGIC IS SIMPLE IF TWO RED OR TWO BLUE LINE COMES TOGETHER THEY INTERSECT EACH OTHER IF NOT THEY WILL SURELY INTERSECT