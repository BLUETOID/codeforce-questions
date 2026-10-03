#include <bits/stdc++.h>
using namespace std;

int numberOfIsland(vector<vector<char>>& grid) {
	if (grid.empty()) return 0;
	int rows = grid.size();
	int cols = grid[0].size();
	int count = 0;

	vector<vector<bool>> visited(rows, vector<bool>(cols, false));

	auto dfs = [&](int r, int c, auto&& dfs_ref) -> void {
		if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '0' || visited[r][c]) {
			return;
		}
		visited[r][c] = true;
		dfs_ref(r + 1, c, dfs_ref);
		dfs_ref(r - 1, c, dfs_ref);
		dfs_ref(r, c + 1, dfs_ref);
		dfs_ref(r, c - 1, dfs_ref);
	};

	for (int r = 0; r < rows; ++r) {
		for (int c = 0; c < cols; ++c) {
			if (grid[r][c] == '1' && !visited[r][c]) {
				++count;
				dfs(r, c, dfs);
			}
		}
	}

	return count;
}