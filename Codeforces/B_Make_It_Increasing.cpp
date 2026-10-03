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
	vi a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (int i = n - 2; i >= 0; i--) {
        while (a[i] >= a[i + 1] && a[i] > 0) {
            a[i] /= 2;
            count++;
        }
        if (a[i] >= a[i + 1]) {
            cout << "-1" << "\n";
            return;
        }
    }
	cout << count << "\n";
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