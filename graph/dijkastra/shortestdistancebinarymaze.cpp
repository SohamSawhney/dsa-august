#include<bits/stdc++.h>
using namespace std;

int shortestPathBinaryMaze(vector<vector<int>>& grid,pair<int,int>src,pair<int,int>dest){
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>>dist(n,vector<int>(m,1e9));
    queue<pair<int,pair<int,int>>>q;
    dist[src.first][src.second]=0;
    q.push({0,{src.first,src.second}});
    int dr[]={-1,0,1,0};
    int dc[]={0,1,0,-1};

    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int dis=it.first;
        int r=it.second.first;
        int c=it.second.second;
         if(r == dest.first && c == dest.second){
            return dis;
         }

        for(int i=0;i<4;i++){
            int newr=r+dr[i];
            int newc=c+dc[i];

            if(newr>=0 and newr<n and newc>=0 and newc<m  and grid[newr][newc]==1 and dis+1<dist[newr][newc]){
                if(newr==dest.first  && newc==dest.second){
                    return dis+1;

                }

                dist[newr][newc] = dis + 1;   // ✅ important

                q.push({dis+1,{newr,newc}});

            }
        }
    }
    return -1;
}


int main(){
    vector<vector<int>>grid={
        {1, 1, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1},
        {0, 1, 0, 1}
    };


    pair<int,int> src = {0, 0};
    pair<int,int> dest = {3, 3};


    int ans = shortestPathBinaryMaze(grid, src, dest);

    if(ans == -1)
        cout << "No path exists\n";
    else
        cout << "Shortest distance: " << ans << endl;

    return 0;



}