#include<bits/stdc++.h>
using namespace std;
int fBottomup(int n,vector<int>p,vector<int>dp){
    dp[0]=0;
    for(int i=1;i<=n;i++){
        int maxsofar=0;


        for(int j=i;j<=n;j++){
            maxsofar=max(maxsofar,p[j-1]+dp[i-j]);

        }
        dp[i]=maxsofar;
  
    }
    return dp[n];
}
int f(int n,vector<int>p){
    if(n==0){
        return 0;
    }
    //recursive case 
    //f(n)=find te max profit of rod of length  n
    int maxsofar=0;
    for(int j=1;j<n;j++){
        maxsofar=max(maxsofar,p[j-1]+f(n-j,p));
    }
    return maxsofar;
}
int main(){
    // int length[]={1,2,3,4,5,6,7,8};
    vector<int>p={1,5,8,9,10,17,20};
    int n=p.size();
   
    cout<<f(n,p);
    vector<int>dp(n+1,-1);
    fBottomup(n,p,dp);

}