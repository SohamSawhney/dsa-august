#include<bits/stdc++.h>
using namespace std;
int fTopDown(int n,vector<int>&dp){
    if(dp[n]!=-1){
        return dp[n];
    }
    if(n==0 || n==1){
        dp[n]=n;
    }
    //recursive case 


    int opt1=fTopDown(n-1,dp);


    // option 2 reduce n to n/2

    int op2=INT_MAX;
    if(n%2==0){
        op2=fTopDown(n/2,dp);
    }
    int op3=INT_MAX;
    if(n%3==0){
        op2=fTopDown(n/3,dp);
    }

    return dp[n]=1+min(opt1,min(op2,op3));





}
int f(int n){
    if(n==1){

        //f(1)  count the number of  min steps required  to reduce 1 to 1
        return 0;
    }

    //recursive case 
    // count number of min sterps required to moive to 1 

    int opt1=f(n-1);


    // option 2 reduce n to n/2

    int op2=INT_MAX;
    if(n%2==0){
        op2=f(n/2);
    }
    int op3=INT_MAX;
    if(n%3==0){
        op2=f(n/3);
    }

    return dp[n]=1+min(opt1,min(op2,op3));


}

int fBottomUp(int n){
    vector<int>dp(n+1);
    dp[1]=0;
    for(int i=2;i<=n;i++){
        int op1=dp[i-1];



        int op2=INT_MAX;
        if(i%2==0){
            op2=dp[i/2];
        }
         int op2=INT_MAX;
        if(i%3==0){
            op2=dp[i/3];
        }
        dp[i]=1+min(op1,min(op1,op2));


    }

    return dp[n];
}
int main(){
    int n=6;
    cout<<f(n);
    vector<int>dp(n,-1);
    cout<<fTopDown(n,dp)<<endl;


    cout<<fBottomUp(n);
}