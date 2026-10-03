
//      here are n pupils in Uolevi's class, and m friendships between them. 
//      Your task is to divide the pupils into two teams in such a way that no two pupils in a team are friends. 
//      You can freely choose the sizes of the teams.

//      Input
//      The first input line has two integers n and m: the number of pupils and friendships. The pupils are numbered 1,2,...,n.
//      Then, there are m lines describing the friendships. Each line has two integers a and b: pupils a and b are friends.
//      Every friendship is between two different pupils. You can assume that there is at most one friendship between any two pupils.
//      Output
//      Print an example of how to build the teams. For each pupil, print "1" or "2" depending on to which team the pupil will be assigned. You can print any valid team.
//      If there are no solutions, print "IMPOSSIBLE".
//      Constraints
     
//      1 <=n <= 10^5
//      1 <= m <= 2*10^5
//      1 <= a,b <= n
     
//      Example
//      Input:
//      5 3
//      1 2
//      1 3
//      4 5
     
//      Output:
//      1 2 2 1 2
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

bool dfs(int u,int c,vector<vector<int>>&adj,vector<int>&color){
    
    color[u]=c;
    
    for(auto v:adj[u]){
        
        if(color[v]==0){
            
            if(!dfs(v,3-c,adj,color))return false;
            
        
        }
        else if(color[v]==color[u])return false;
    }
    
    return true;
}


void solve() {
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>adj(n+1);
    vector<int>color(n+1,0);
    
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    for(int i=1;i<=n;i++){
        if(color[i]==0){
            if(!dfs(i,1,adj,color)){
                cout<<"IMPOSSIBLE";
                return;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        cout<<color[i]<<" ";
    }
    
    
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// setIO(""); 

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}