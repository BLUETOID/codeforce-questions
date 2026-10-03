#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
using int128 = __int128_t;

void setIO(string name = "") {
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
void solve() {
    long long x, y, k;
    if (!(cin >> x >> y >> k)) return;

    long long D = y - x;

    if (D == 0) {
        cout << 0 << "\n";
        return;
    }

    long long L = x;
    long long R = x + k - 1;

    int128 total_work = 0;

    if (R > D) {
        long long high_L = max(L, D + 1);
        int128 count = (R - high_L + 1);
        total_work += count * D;
        R = high_L - 1; 
    }

    long long cur = L;
    while (cur <= R) {
        long long q = D / cur;
        long long next_cur = min(R, D / q);

        int128 count = next_cur - cur + 1;
        int128 sum_m = (int128)(cur + next_cur) * count / 2;

        total_work += (int128)D * count - (int128)q * sum_m;
        cur = next_cur + 1;
    }

    cout << (long long)total_work << "\n";
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