#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<char,vector<char>>adj;
    for(int i=0;i<m;i++){
        char u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(pair<char,vector<char>>p:adj){
        char node=p.first;
        vector<char>ngblist=p.second;
        cout<<node<<":";
        for()
    }
}