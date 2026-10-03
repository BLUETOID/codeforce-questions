#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void setIO(string name = "") {
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

const int dr[4]={-1,1,0,0};
const int dc[4]={0,0,-1,1};

void bfs(int start_row,int start_col,int n,int m,vector<string>&grid){
    grid[start_row][start_col]='#';
    queue<pair<int,int>>q;
    q.push({start_row,start_col});
    
    while(!q.empty()){
        auto[r,c]=q.front();
        q.pop();
        
        for(int k=0;k<4;k++){
            int nr = r+dr[k];
            int nc = c+dc[k];
        
        if(nr >=0 && nr < n && nc >=0 && nc < m && grid[nr][nc]=='.'){
            grid[nr][nc]='#';
            q.push({nr,nc});
        }
        }
    }
}



void solve() {
	int n,m;
	cin>>n>>m;
	vector<string>grid(n);
	for(int i=0;i<n;i++){
	    cin>>grid[i];
	}
	
	int room = 0;
	
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        if(grid[i][j]=='.'){
	            room++;
	            bfs(i,j,n,m,grid);
	        }
	    }
	}
	
	cout<< room <<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// setIO(""); 

	int t = 1;
// 	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}