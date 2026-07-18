#include<iostream>
using namespace std;
int main(){
    int n=42;
    int m=36;
    int count=0;
    while(n>0 || m>0){
      int bitn=n&1;
      int bitm=m&1;
      if(bitn!=bitm){
        count++;
      }
       n= n>>1;
       m=m>>1;
    }
    cout<<count;
}