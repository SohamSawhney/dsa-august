#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int count=0;
   while(n>0){
    int mask=n&1;
    if(mask){
      count++;
    }
    n=n>>1;
   }
   cout<<count;
}
