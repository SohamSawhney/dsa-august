#include<bits/stdc++.h>
using namespace std;
int f(int n,int k){
    if(n==0){

       // f(0,k)  =count the no.  of ways to reach 0 th step from 0 th step
        return 1;
    }

    //recursive cse 
// f(n,k)    count the no. of ways to reach n th step from 0 th step

int cnt=0;
for(int j=1;j<=k;j++){

    if(n-j>=0){
        cnt+=f(n-j,k);
    }

}

return cnt;
}



int fBottomUp(int n,int k){
    vector<int>dp(n+1);
    dp[0]=1;  // at the 0th index of dp[]  we store f(0)

    for(int i=1;i<=n;i++){
        int cnt=0;

        for(int j=1;j<=k;j++){
            // can u 
            if(i-j>=0){
                cnt+=dp[i-j];
            }
        }
        dp[i]=cnt;
    }



    return dp[n];

}




int fBottomUpTimeOptimized(int n,int k){
    vector<int>dp(n+1);

    for(int i=1;i<=k;i++){
        dp[i]=2*dp[i-1];

    }

    for(int i=k+1;i<=n;i++){
        dp[i]=2*dp[i-1]-dp[i-k-1];
    }

    return dp[n];    // at the n th index of dp[]   we store f(n)
}


int main(){
    int n=4;
    int k=3;

    cout<<f(n,k)<<endl;
    cout<<fBottomUp(n,k)<<endl;


    cout<<fBottomUpTimeOptimized(n,k);





}