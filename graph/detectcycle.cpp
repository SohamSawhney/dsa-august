#include<bits/stdc++.h>
using namespace std;


bool bfsCheck(int start,vector<int> adj[],vector<bool>&visited){

//{node,parent}
    queue<pair<int,int>>q;
    q.push({start,-1});
    visited[start]=true;
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto neighbour:adj[node]){
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push({neighbour,node});
            }
            else if(neighbour!=parent){
                return true;
            }
        }
    }
    return false;
}

bool detectCycle(int V,vector<int>adj[]){
    vector<bool>visited(V,false);
     
    for(int i=0;i<V;i++){
        if(!visited[i]){
            if(bfsCheck(i,adj,visited)){
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
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(2);

    adj[3].push_back(0);
    adj[0].push_back(3);

    if (detectCycle(V, adj)) {
        cout << "Cycle detected\n";
    } else {
        cout << "No cycle\n";
    }

    return 0;
}