#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void dfs(int node,vector<vector<int>>& isConnected,vector<int>& vis){
        vis[node]=1;
       
        for(int j = 0; j < isConnected.size(); j++) {
            if(isConnected[node][j] == 1 && !vis[j]) {
                dfs(j, isConnected, vis);
            }
    }

}
    int findcircleNum(vector<vector<int>>& isConnected){
        int n=isConnected.size();
        vector<int>vis(n,0);
        int provinces=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                provinces++;
                dfs(i,isConnected,vis);
            }
        }
    
         return provinces;
    }

};

int main(){
    vector<vector<int>>isConnected={
        {1,1,0},
        {1,1,0},
        {0,0,1}
    };
    solution obj;
    cout<<"No. of provinces"<<obj.findcircleNum(isConnected);
    return 0;

}