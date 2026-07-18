#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>nearestZero(vector<vector<int>> &grid){
    int n= grid.size();
    int m=grid[0].size();
    vector<vector<int>>dis(n,vector<int>(m,0));
    vector<vector<int>>visited(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>>q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                q.push({{i,j},0});
                visited[i][j]=1;
            }
            else{
                visited[i][j]=0;
            }
        }
    }
    int delrow[]={-1,0,+1,0};
    int delcol[]={0,+1,0,-1};
    while(!q.empty()){
        int row=q.front().first.first;
        int col=q.front().first.second;
        int steps=q.front().second;
        q.pop();
        dis[row][col]=steps;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            

            if(nrow>=0 && nrow<n && ncol>=0  && ncol<m   && visited[nrow][ncol]==0){
                visited[nrow][ncol]=1;
                q.push({{nrow,ncol},steps+1});
            }
        }
    }
    return dis;

}
int main(){
    vector<vector<int>>grid={
        {0,1,1},
        {1,1,1},
        {1,1,0}
    };
    vector<vector<int>>result=nearestZero(grid);

    for (auto row : result) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
