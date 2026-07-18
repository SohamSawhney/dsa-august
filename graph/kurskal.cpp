#include<bits/stdc++.h>
using namespace std;

class DSU{
    public:
    vector<int>parent,rank;
    DSU(int n){
        parent.resize(n);
        rank.resize(n,0);

        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }

    int findParent(int node){
        if(node==parent[node]){
            return node;
        }

        return parent[node]=findParent(parent[node]);
    }
    void unionByRank(int u,int v){
        int pu=findParent(u);
        int pv=findParent(v);
        if(pu==pv){
            return;
        }

        if(rank[pu]<rank[pv]){
            parent[pu]=pv;
        }

        else if(rank[pv]<rank[pu]){
            parent[pv]=pu;
        }
        else{
            parent[pv]=pu;

            rank[pu]++;
        }
    }
};

int main(){
    //{weight,{u,v}}
    int V=3;

    vector<pair<int,pair<int,int>>>edges={
        {5,{0,1}},
        {3,{1,2}},
        {1,{0,2}}
    };



    sort(edges.begin(),edges.end());
    DSU ds(V);
    int mstWeight=0;


    for(auto it:edges){
        int wt=it.first;
        int u=it.second.first;
        int v=it.second.second;


        if(ds.findParent(u)!=ds.findParent(v)){
            mstWeight+=wt;
            ds.unionByRank(u,v);

        }
    }

    cout<<"MST weight:"<<mstWeight<<endl;


}