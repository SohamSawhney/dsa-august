#include<bits/stdc++.h>
using namespace std;

bool dfs(int node,vector<int> adj[],vector<int>&vis,vector<int>&pathvis,vector<int>& check){
    






    vis[node]=1;
    pathvis[node]=1;
    check[node]=0;  // assume unsafe 
    for(auto neighbour:adj[node]){
        if(!vis[neighbour]){
            if(dfs(neighbour,adj,vis,pathvis,check)){
                return true;
            }
        }
        else if(pathvis[neighbour]){
            return true;
        }
    }

    pathvis[node]=0;
    check[node]=1;
    return false;
    
    
}



vector<int> eventualsafeNodes(int V,vector<int>adj[]){
    vector<int>vis(V,0);
    vector<int>pathVis(V,0);
    vector<int>check(V,0);

    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(i,adj,vis,pathVis,check);
        }
    }

    vector<int>safeNodes;
    for(int i=0;i<V;i++){

        if(check[i]==1){
            safeNodes.push_back(i);
        }

    }



    return safeNodes;
}




int main(){
    int V=7;
    vector<int>adj[V];
  

    // if (detectCycle(V, adj)) {
    //     cout << "Cycle detected\n";
    // } else {
    //     cout << "No cycle\n";
    // }

adj[0] = {1,2};
adj[1] = {2,3};
adj[2] = {5};
adj[3] = {0};
adj[4] = {5};
adj[5] = {};
adj[6] = {};




    vector<int>result=eventualsafeNodes(V,adj);

    for(auto it:result){
        cout<<it;
    }

    return 0;
}