#include <iostream>
#include <string>

using namespace std;

void solve() {
    int X;
    if (!(cin >> X)) return;

    if (X == 0) {
        cout << "A\n";
        return;
    }

    int best_M = 1;
    int min_len = 1000;

    // Dynamically find the base M that produces the shortest valid string
    for (int m = 1; m <= 25; m++) {
        int q = X / m;
        int r = X % m;
        int len = 2 * q + 2 * m - 1 + (r > 0 ? 2 : 0);
        
        if (len < min_len) {
            min_len = len;
            best_M = m;
        }
    }

    int q = X / best_M;
    int r = X % best_M;
    string ans = "";

    // 1. Append prefix multiplier
    for (int i = 0; i < q; i++) {
        ans += "AR";
    }

    // 2. Build the C/R lattice, injecting remainder A when exactly r 'C's remain
    for (int i = best_M; i >= 1; i--) {
        if (i == r) ans += "AR";
        ans += "C";
        if (i > 1) ans += "R";
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}