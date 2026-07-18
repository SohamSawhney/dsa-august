#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	vector<vector<int>> adj(n);

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v); // gr is directed
	}
    int s=0;
    vector<int>distMap(n);
    distMap[s]=0;
    vector<bool>vis(n,false);
    vis[s]=true;
    queue<int>q;
    q.push(s);

    while(!q.empty()){
        int cur=q.front();
        q.pop();


        for(int ngb:adj[cur]){
            if(!vis[ngb]){
                vis[ngb]=true;
                q.push(ngb);
                distMap[ngb]=distMap[cur]+1;      //since  we are visting cuz 
            }
        }
    }

}