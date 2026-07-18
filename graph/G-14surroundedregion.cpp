#include<bits/stdc++.h>
using namespace std;
void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>&mat,int delrow[],int delcol[]){
    vis[row][col]=1;
    int n=mat.size();
    int m=mat[0].size();

    // check  for top,right,bottom,left
    for(int i=0;i<4;i++){
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];
        if(nrow>=0 and nrow<n and ncol>=0  and ncol<m  and !vis[nrow][ncol] and mat[nrow][ncol]=='O'){
            dfs(nrow,ncol,vis,mat,delrow,delcol);
        }
    }
}
vector<vector<char>>solve(vector<vector<char>>board){
   
    int n=board.size();
    int m=board[0].size();
    int delrow[]={-1,0,+1,0};
    int delcol[]={0,+1,0,-1};
       vector<vector<int>>vis(n,vector<int>(m,0));
    for(int j=0;j<m;j++){
        // first row 
        if(!vis[0][j]  and board[0][j]=='O'){
            dfs(0,j,vis,board,delrow,delcol);
        }
        if(!vis[n-1][j] and board[n-1][j]=='O'){
            dfs(n-1,j,vis,board,delrow,delcol);
        }

    }
    for(int i=0;i<n;i++){
        if(!vis[i][0] and board[i][0]=='O'){
            dfs(i,0,vis,board,delrow,delcol);
        }
        if(!vis[i][m-1] and board[i][m-1]=='O'){
            dfs(i,m-1,vis,board,delrow,delcol);
        }
    }
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!vis[i][j] and board[i][j]=='O'){
            board[i][j]='X';
        }
    }
}

return  board;
}
int main(){
    vector<vector<char>>board={
          {'X','X','X','X'},
        {'X','O','O','X'},
        {'X','X','O','X'},
        {'X','O','X','X'}
    };

    // solve(board);
    // for(auto  row:board){
    //     for(auto ch:row){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<char>>ans=solve(board);
    for(auto row:ans){
        for(auto ch:row){
            cout<<ch;
        }
        cout<<endl;

    }
    return 0;
}