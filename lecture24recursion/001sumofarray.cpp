#include<iostream>
using namespace std;
int f(int x[],int n,int i){
    //base case 

    //recursive case 
    // f(i)  function that takes suffix that starts at the ith index 

    if(i==n){
        return 0;
    }


    //recursive case 
    // ask your friend to calculate suffix that starts at the i+1th index
    int A=f(x,n,i+1);

    return x[i]+A;
}
int main(){
    int x[]={10,20,30,40};
    int n=sizeof(x)/sizeof(int);
    cout<<f(x,n,0);
}