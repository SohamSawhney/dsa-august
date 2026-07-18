#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){   // no. of iterations is equal to no. of set bit 
      n=n&(n-1);
        count++;
    }
    cout<<count;
}