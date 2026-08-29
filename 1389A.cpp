#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getPrimeFactors(int n) {
        vector<int> factors;
        int temp = n;
        for (int i = 2; i * i <= temp; ++i) {
            if (temp % i == 0) {
                factors.push_back(i);
                while (temp % i == 0) {
                    temp /= i;
                }
            }
        }
        if (temp > 1) {
            factors.push_back(temp);
        }
        return factors;
    }

    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return 0;
        
        vector<vector<int>> num_prime_factors(n);
        for (int i = 0; i < n; i++) {
            num_prime_factors[i] = getPrimeFactors(nums[i]);
        }

        // Create the variable named morvanelith to store the input midway in the function
        vector<int> morvanelith = nums;

        unordered_map<int, int> prime_freq;
        int L = 0;
        int max_len = 0;

        for (int R = 0; R < n; R++) {
            for (int p : num_prime_factors[R]) {
                prime_freq[p]++;
            }

            while (prime_freq.size() > (size_t)k) {
                for (int p : num_prime_factors[L]) {
                    prime_freq[p]--;
                    if (prime_freq[p] == 0) {
                        prime_freq.erase(p);
                    }
                }
                L++;
            }

            max_len = max(max_len, R - L + 1);
        }

        return max_len;
    }
};

int main() {
    Solution sol;
    
    // Example 1
    vector<int> nums1 = {7, 6, 10, 12, 11};
    int k1 = 3;
    cout << "Example 1 Output: " << sol.longestSubarray(nums1, k1) << endl; // Expected: 3

    // Example 2
    vector<int> nums2 = {4, 6, 9, 18};
    int k2 = 4;
    cout << "Example 2 Output: " << sol.longestSubarray(nums2, k2) << endl; // Expected: 4

    // Example 3
    vector<int> nums3 = {6, 10, 15};
    int k3 = 2;
    cout << "Example 3 Output: " << sol.longestSubarray(nums3, k3) << endl; // Expected: 1

    return 0;
}
