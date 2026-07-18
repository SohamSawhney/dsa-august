#include<bits/stdc++.h>
using namespace std;

bool dfs(int node,vector<int>adj[],vector<int>&vis,vector<int> &pathVis){
    vis[node]=1;
    pathVis[node]=1;



    for(auto neighbour:adj[node]){


        //Not visited 
        if(!vis[neighbour]){
            if(dfs(neighbour,adj,vis,pathVis)){
                return true;
            }
        }

        else if(pathVis[neighbour]){
            return true;
        }
    }

    pathVis[node]=0;
    return false;
}
bool isCycle(int V,vector<int>adj[]){
    vector<int>vis(V,0);
    vector<int>pathVis(V,0);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(dfs(i,adj,vis,pathVis)){
                return true;
            }
        }
    }

    return false;
}
int main(){
    int V=4;
    vector<int>adj[V];
    adj[0].push_back(1);
    adj[1].push_back(2);
      adj[2].push_back(3);
    adj[3].push_back(1); // cycle
    if(isCycle(V,adj)){
        cout<<"cycle detected\n";
    }
    else{
        cout<<"no cycle\n";
    }
}