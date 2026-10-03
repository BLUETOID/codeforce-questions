#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> chosen_indices;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            chosen_indices.push_back(i);
        }
    }

    int m = chosen_indices.size();
    for (int i = 0; i < m / 2; i++) {
        swap(arr[chosen_indices[i]], arr[chosen_indices[m - 1 - i]]);
    }
    
    for (int i = 0; i < n; i++) {
        if(arr[i] != i+1){
            cout<<"NO"<<"\n";
            return;
        }
    }
    
    cout<<"YES"<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}