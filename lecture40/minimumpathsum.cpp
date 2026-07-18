#include<bits/stdc++.h>
using namespace std;
int f(const vector<vector<int>>&grid,int m,int n,int i,int j){
    if(i==m-1 and j==n-1){
        return grid[i][j];
    }


    // recursive case 
    // f(i,j)  minimum path  from  0,0  to  (m-1,n-1)
    if(i==m-1){
        return grid[i][j]+f(grid,m,n,i,j+1);

    }
    if(j==n-1){
        return grid[i][j]+f(grid,m,n,i+1,j);
    }
    int x=f(grid,m,n,i+1,j);
    int y=f(grid,m,n,i,j+1);

    return grid[i][j]+min(x,y);
}

int fTopDown(const vector<vector<int>>&grid,int m,int n,int i,int j,vector<vector<int>>&dp){

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
      if(i==m-1 and j==n-1){
        return dp[i][j]=grid[i][j];
    }


    // recursive case 
    // f(i,j)  minimum path  from  0,0  to  (m-1,n-1)
    if(i==m-1){
        return dp[i][j]=grid[i][j]+f(grid,m,n,i,j+1);

    }
    if(j==n-1){
        return dp[i][j]=grid[i][j]+f(grid,m,n,i+1,j);
    }
    int x=f(grid,m,n,i+1,j);
    int y=f(grid,m,n,i,j+1);

    return dp[i][j]=grid[i][j]+min(x,y);
}


int fBottomUp(const vector<vector<int>>& grid,int m,int n){
    vector<vector<int>>dp(m,vector<int>(n));

    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j++){
          //  dp[i][j]=f(i,j)

          if(i==m-1 and j==n-1){
            dp[i][j]=grid[i][j];

          }
          else if(i==m-1){
            dp[i][j]=grid[i][j]+dp[i][j+1];
          }
  else if(i==m-1){
            dp[i][j]=grid[i][j]+dp[i][j+1];
          }
        }
    }



    int x=0;
    int y=0;
    while(!(x==m-1 and y==n-1)){
        cout<<x<<" "<<y;
        if((y+1)<n and dp[x][y]=grid[x][y]+dp[x][y+1]){
            
        }
    }
}

int main(){

    vector<vector<int>>grid={
        {2,3,4},
        {4,5,6},
        {8,9,10}
    };

    int m=grid.size();
    int n=grid[0].size();

    cout<<f(grid,m,n,0,0);





    vector<vector<int>>dp(m,vector<int>(m,-1));


    cout<<fTopDown(grid,m,n,0,0,dp)<<endl;
}