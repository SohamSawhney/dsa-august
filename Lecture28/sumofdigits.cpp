#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/10;

    }
    int tsum=0;
    while(sum>=10){
       tsum+=sum%10;
       sum=sum/10;
    }

    cout<<tsum;
}