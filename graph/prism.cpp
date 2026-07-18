#include<bits/stdc++.h>
using namespace  std;
int spanningTree(int V,vector<vector<int>>&edges){
    //code here
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<vector<pair<int,int>>>adj(V);
    for(auto &it:edges){
        int u=it[0];
        int v=it[1];
        int w=it[2];

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});


    }
    vector<int>vis(V,0);

    pq.push({0,0});
    int sum=0;

    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int node=it.second;
        int wt=it.first;


        if(vis[node]==1) continue;

        vis[node]=1;
        sum+=wt;

        for(auto it:adj[node]){
            int adjNode=it.first;
            int edW=it.second;
            if(!vis[adjNode]){
                pq.push({edW,adjNode});
            }
        }

    }

    return sum;
}

int main(){
    vector<vector<int>>edges={
        {0,1,5},
        {1,2,3},
        {0,2,1}

    };
    int V=3;
    cout<<spanningTree(V,edges);
}