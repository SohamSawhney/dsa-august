#include<bits/stdc++.h>
using namespace std;


vector<int>bellman_ford(int V,vector<vector<int>>&edges,int S){
    vector<int>dist(V,1e8);
    dist[S]=0;
    //0(v*E)


    for(int i=0;i<V-1;i++){
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int wt=it[2];


            if(dist[u]!=1e8  && dist[u]+wt<dist[v]){
                dist[v]=dist[u]+wt;
            }
    }
}



// Nth  relaxtion  to check  negative cycle 


for(auto it:edges){
    int u=it[0];
    int v=it[1];
    int wt=it[2];

    if(dist[u]!=1e8 && dist[u]+wt<dist[v]){
        return {-1};
    }
}
return dist;

}

int main(){
    int V=5;
    vector<vector<int>>edge={
        {1,3,2},
        {4,3,-1},
        {2,4,1},
        {1,2,1},
        {0,1,5}
    };

    int S=0;

    vector<int>ans=bellman_ford(V,edge,S);
    for(auto it:ans){
        cout<<it<<" ";
    }




}