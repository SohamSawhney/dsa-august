#include<bits/stdc++.h>
using namespace std;
vector<int>dijkastra(int V,vector<vector<int>>adj[],int s){
    set<pair<int,int>>st;  //{distance,Node}

    vector<int>dist(V,1e9);
    dist[s]=0;
    st.insert({0,s});
    while(!st.empty()){
        auto it=*(st.begin());
        int node=it.second;
        int dis=it.first;
        st.erase(it);


        for(auto it:adj[node]){
            int adjNode=it[0];
            int edgeWeight=it[1];



            if(dis+edgeWeight<dist[adjNode]){
                // erase old value 
                if(dist[adjNode]!=1e9){
                    st.erase({dist[adjNode],adjNode});
                }
                dist[adjNode]=dis+edgeWeight;
                st.insert({dist[adjNode],adjNode});

            }
        }
    }
return dist;
}
int main(){
    int V=3;
    vector<vector<int>>adj[V];
    //u->v   with weigh w
    adj[0].push_back({1,1});
    adj[0].push_back({2,6});
    adj[1].push_back({2, 3});
    adj[1].push_back({0, 1});
    adj[2].push_back({1, 3});
    adj[2].push_back({0, 6});




    vector<int>result=dijkastra(V,adj,2);


    for(auto x:result) cout<<x<<" ";
    
}