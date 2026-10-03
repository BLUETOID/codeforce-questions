#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    string s, t;
    cin >> s >> t;

    sort(all(s));
    sort(all(t));

    string result;
    int i = 0, j = 0;
    int consecutive_s = 0, consecutive_t = 0;

    while (i < n || j < m) {
        bool take_s = false;

        if (i < n && (j == m || consecutive_t == k || (s[i] < t[j] && consecutive_s < k) || (s[i] == t[j] && consecutive_s < k))) {
            take_s = true;
        }

        if (take_s) {
            result += s[i++];
            consecutive_s++;
            consecutive_t = 0;
        } else if (j < m) {
            result += t[j++];
            consecutive_t++;
            consecutive_s = 0;
        }
    }

    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}