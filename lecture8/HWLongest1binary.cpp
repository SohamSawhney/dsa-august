#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxcount=INT_MIN;
    int count=0;
    while(n>0){
     int zerobit=n&1;
     if(zerobit){
        count++;
        maxcount=max(maxcount,count);
     }
    else{
        count=0;
    }
    n=n>>1;
     }
    cout<<maxcount;
}