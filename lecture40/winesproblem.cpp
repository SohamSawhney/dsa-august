#include<bits/stdc++.h>
using namespace std;
int f(const vector<int>& p,int i,int j,int y){
    if(i==j){
        return y*p[i];
    }


    //recursive case 
    // f(i,j,y)   = find the maximum profit from wines[i..j]  start 
    //decide for the y th year 
    // sell ith bottle in yth year
    // sell jth  bottle in yth  yearn


    return  max(y*p[i]+f(p,i+1,j,y),y*p[j]+f(p,i,j-1,y));
}
int fTopDown(const vector<int>&p,int i,int j,int y,vector<vector<vector<int>>>&dp){
    // lookup
    if(dp[i][j][y]!=-1){
        return dp[i][j][y];
    }

    // base case 
   

    if(i==j){
        return dp[i][j][y]=y*p[i];
    }


    //recursive case 
    // f(i,j,y)   = find the maximum profit from wines[i..j]  start 
    //decide for the y th year 
    // sell ith bottle in yth year
    // sell jth  bottle in yth  yearn


    return  dp[i][j][y]=max(y*p[i]+f(p,i+1,j,y),y*p[j]+f(p,i,j-1,y));

}


int fTopDownStateOptimized(const vector<int>&p,int i,int j,vector<vector<int>>&dp){
    int y=p.size()-j+i;
    // lookup
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    // base case 

}

int fBottomUp(vector<int>&p,int n){
    vector<vector<int>>dp(n,vector<int>(n));

    for(int i=0;i<n;i++){
        dp[i][i]=n*p[i];
    }

    for(int i=n-1;i>=0;i--){
        for(int j=i+1;j<n;j++){
            int y=n-j+1;
            dp[i][j]=;
        }
    }
    return dp[0][n-1];
}
int main(){

}