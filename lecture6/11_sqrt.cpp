#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int ans=0;
    while(ans*ans<=n){
        ans=ans+1;
    }
    ans=ans-1;
    while(ans*ans<=n){
        ans+0.1;
    }
    ans-0.1;
    while(ans*ans<=n){
        ans=ans+0.01;
    }
    ans=ans-0.01;
    cout<<ans;

    return 0;
     
    }

