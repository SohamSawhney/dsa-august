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
    vector<int>indegree(n,0);
    for(int i=0;i<n;i++){
        for(int ngb:adj[i]){
            indegree[ngb]++;
        }
    }



    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int cur=q.front();
        q.pop();
        cout<<cur<<" ";

        for(int ngb:adj[cur]){
        indegree[ngb]--;
        if(indegree[ngb]==0){
            q.push(ngb);
        }
        }
    }
    return 0;

}