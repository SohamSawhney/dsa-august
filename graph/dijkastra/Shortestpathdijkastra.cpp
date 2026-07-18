#include<bits/stdc++.h>
using namespace std;

vector<int>shortestPath(int V,vector<vector<int>>adj[],int s,int dest){
    //Min heap ->{distance,node}

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(V,1e9);
    vector<int>parent(V);
    for(int i=0;i<V;i++){
        parent[i]=i;
    }

    dist[s]=0;
    pq.push({0,s});


    while(!pq.empty()){
        auto it=pq.top();
      
        pq.pop();
        int dis=it.first;
        int node=it.second;


        for(auto it:adj[node]){
            int adjNode=it[0];
            int wt=it[1];
            if(dis+wt<dist[adjNode]){
                dist[adjNode]=dis+wt;

                parent[adjNode]=node;  // track parent 
                pq.push({dist[adjNode],adjNode});
            }
        }

    }
if(dist[dest]==1e9){
    return {-1};
}


vector<int>path;
int node=dest;
while(parent[node]!=node){

    path.push_back(node);
    node=parent[node];


}



path.push_back(s);


reverse(path.begin(),path.end());



return path;
}
int main(){
    int V=5;
vector<vector<int>>adj[V];


    adj[0].push_back({1,2});

      adj[0].push_back({2, 4});
    adj[1].push_back({2, 1});
    adj[1].push_back({3, 7});
    adj[2].push_back({4, 3});
    adj[3].push_back({4, 1});
    
    int src = 0, dest = 4;


    vector<int>path=shortestPath(V,adj,src,dest);

    for(auto it:path){
        cout<<it<<" ";
    }


    return 0;
}