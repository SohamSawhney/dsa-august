// time 0(n)
//space o(n)

#include<iostream>
using namespace std;
bool f(int x[],int n,int i){
    //base case
    if(i==n-1){
        return true;
    }

    //recursive 
    // f(i)=check if x[i...n-1] is sorted ort not 
   return x[i]< x[i+1]  and f(x,n,i+1);
  
}
int main(){
    int x[]={10,20,30,40,50};
     int n=sizeof(x)/sizeof(int);
    cout<<f(x,n,0)<<endl;
}