#include<bits/stdc++.h>
using namespace std;

bool bfsCheck(int start,vector<int>adj[],vector<int>&color){
    queue<int>q;
    q.push(start);
    color[start]=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto neighbour:adj[node]){
            if(color[neighbour]==-1){
                color[neighbour]=!color[node];
                q.push(neighbour);

            }


            // if same color  ->not biparite


            else if(color[neighbour]==color[node]){
                return false;
            }
        }

    }


    return  true;
}

bool isBiparite(int V,vector<int>adj[]){
    vector<int>color(V,-1);
    for(int i=0;i<V;i++){
        if(color[i]==-1){
            if(!bfsCheck(i,adj,color)){
                return false;
            }
        }
    }

    return true;
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
