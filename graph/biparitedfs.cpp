
#include<bits/stdc++.h>
using namespace std;

bool  dfs(int node,int col,int color[],vector<int>adj[]){
    color[node]=col;
    for(auto it:adj[node]){
       if(color[it]==-1){
        if(dfs(it,!col,color,adj)==false){
            return false;
        }

       }
       if(color[it]==col){
        return false;
       }
    }

    return true;
}
bool isBiparite(int V,vector<int>adj[]){
    int color[V];
    for(int i=0;i<V;i++){
        color[i]=-1;
    }

    for(int i=0;i<V;i++){
        if(color[i]==-1){
            if(dfs(i,0,color,adj)==false){
                return false;

            }
        }

        return true;
    }
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


     if (isBiparite(V, adj)) {
        cout << "Bipartite\n";
    } else {
        cout << "Not Bipartite\n";
    }

    return 0;
}
