#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    
    ll max_length = 0;
    ll current_num = 1;
    
  
    while (n % current_num == 0) {
        max_length++;
        current_num++;
    }
    
    cout << max_length << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
