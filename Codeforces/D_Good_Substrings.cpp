#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdint>
#include <chrono>
#include <random>

using namespace std;
using namespace std::chrono;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string good_mask;
    int k;

    if (!(cin >> s >> good_mask >> k)) return 0;

    int n = s.size();

    mt19937_64 rng(steady_clock::now().time_since_epoch().count());
    
    const uint64_t P1 = uniform_int_distribution<uint64_t>(300, 1000000)(rng) | 1;
    const uint64_t P2 = uniform_int_distribution<uint64_t>(300, 1000000)(rng) | 1;

    const uint64_t M1 = 1000000007;
    const uint64_t M2 = 1000000009;

    vector<uint64_t> hashes;
    hashes.reserve((n * (n + 1)) / 2);

    for (int i = 0; i < n; ++i) {
        int bad_count = 0;
        uint64_t h1 = 0;
        uint64_t h2 = 0;

        for (int j = i; j < n; ++j) {
            if (good_mask[s[j] - 'a'] == '0') {
                bad_count++;
            }
            if (bad_count > k) break;

            int val = s[j] - 'a' + 1;
            h1 = (h1 * P1 + val) % M1;
            h2 = (h2 * P2 + val) % M2;

            hashes.push_back((h1 << 32) | h2);
        }
    }

    sort(hashes.begin(), hashes.end());
    int ans = unique(hashes.begin(), hashes.end()) - hashes.begin();

    cout << ans << '\n';
    return 0;
}