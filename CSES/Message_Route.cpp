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


void solve() {
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>adj(n+1);
    vector<bool>visited(n+1,false);
    vector<int>parent(n+1,0);
    queue<int>q;
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    visited[1]=true;
    q.push(1);
    
    while(!q.empty()){
        
        int u = q.front();
        q.pop();
        
        if(u==n)break;
        
        for(int x:adj[u]){
            if(!visited[x]){
                visited[x]=true;
                parent[x]=u;
                q.push(x);
            }
        }
    }

    if(!visited[n]){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    vector<int>path;
    for(int count=n;count!=0;count=parent[count]){
        path.push_back(count);
    }
    
    
    reverse(all(path));
    
    cout<<path.size()<<"\n";
    
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<"\n";
    
	
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