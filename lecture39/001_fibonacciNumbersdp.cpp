#include<bits/stdc++.h>
using namespace std;
int cnt2=0;
int FTopDown(int n,vector<int>&dp){
    cnt2++;
    if(dp[n]!=-1){
        return dp[n];
    }


    //base case 
    if(n==0 || n==1){
        return dp[n]=n;
    }
    return dp[n]=FTopDown(n-1,dp)+FTopDown(n-2,dp);
}
int fBottomUp(int n){
    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int fBottomUpSpaceOptimized(int n){
    int a=0;
    int b=1;
    for(int i=1;i<=n-1;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n=6;
    vector<int>dp(n+1,-1);
    cout<<FTopDown(n,dp)<<endl;
    cout<<cnt2<<endl;
    cout<<fBottomUp(n)<<endl;

}