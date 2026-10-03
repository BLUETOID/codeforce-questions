#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "") {
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

void solve() {
    int k, n;
    cin >> k >> n;

    // pos[s][c] stores the 0 indexed finish rank of cow c in session s
    vector<vector<int>> pos(k, vector<int>(n + 1));
    for (int s = 0; s < k; s++) {
        for (int rank = 0; rank < n; rank++) {
            int cow;
            cin >> cow;
            pos[s][cow] = rank;
        }
    }

    int consistent_pairs = 0;

    // Checking all ordered pairs of cows (a, b)
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            if (a == b) continue;

            bool always_better = true;
            for (int s = 0; s < k; s++) {
                if (pos[s][a] > pos[s][b]) {
                    always_better = false;
                    break;
                }
            }

            if (always_better) {
                consistent_pairs++;
            }
        }
    }

    cout << consistent_pairs << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    setIO("gymnastics");

    solve();

    return 0;
}