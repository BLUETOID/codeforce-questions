#include <iostream>
#include <vector>

using namespace std;

void dfs(int u, const vector<vector<int>>& adj, vector<bool>& visited) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, adj, visited);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> representatives;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            representatives.push_back(i);
            dfs(i, adj, visited);
        }
    }

    cout << (int)representatives.size() - 1 << "\n";

    for (size_t i = 1; i < representatives.size(); i++) {
        cout << representatives[i - 1] << " " << representatives[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}