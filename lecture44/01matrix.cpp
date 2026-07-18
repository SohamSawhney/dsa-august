#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>updateMatrixoptimized(const vector<vector<int>>&mat){
    int m=mat.size();
    int n=mat[0].size();
    vector<vector<int>>disMat(m,vector<int>(n,INT_MAX));
    queue<pair<int,int>>q;
    for(int i=0;i<)
}

vector<int>dx={0,0,-1,1};
vector<int>dy={1,-1,0,0};
while(!q.empty()){
    pair<int,int>p=q.front();
    q.pop();
    int i=p.first;
    int j=p.second;
    for(int k=0;k<4;k++){
        int nx=i+dx[k];
        int ny=j+dy[k];


        if(nx>=0 and nx<m amd ny>=0 and ny<n and distMat[nx][ny]==INT_MAX){
            q.push({nx,ny});
            distMat[nx][ny]=1+distMat[i][j];
        }
    }
}
return distMat;



int main(){

}