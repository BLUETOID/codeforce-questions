#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll current_calories = 0; 
    vector<bool> eaten(n, false); 

    for (ll i = 0; i < n; i++) {
        if (i >= m) {
            if (eaten[i - m]) {
                current_calories -= a[i - m];
            }
        }

        if (current_calories + a[i] > k) {
            cout << "No\n";
            eaten[i] = false; 
        } else {
            cout << "Yes\n";
            current_calories += a[i];
            eaten[i] = true; 
        }
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;s
    while (t--) {
        solve();
    }
    return 0;
}
