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
    ll a, b;
    if (!(cin >> a >> b)) return;

    if (a == 0) {
        cout << b << " " << 0 << "\n";
        return;
    }

    ll S = a + b;
    ll b_prime = 0;

    for (int i = 29; i >= 0; i--) {
        if ((S >> i) & 1) {
            ll lower_bits_mask = S & ((1LL << i) - 1);
            
            if (b_prime + lower_bits_mask < b) {
                b_prime |= (1LL << i);
            }
        }
    }

    ll max_xor = S; 
    ll op = b_prime - b;

    cout << max_xor << " " << op << "\n";
}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// setIO(""); 

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}