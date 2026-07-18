#include<iostream>
using namespace std;
void f(char inp[],int n, int i){

    if(i==n){
        cout<<inp<<endl;
        return ;
    }
    //base case 
    //recursive case 
    // f(i)=take decision for remaining position   i to n-1
    //decide char  for the ith position /index 


    for(int j=i;j<n;j++){
        // chose the jth option assign inp[j]   to inp[i]
      
        swap(inp[i],inp[j]);
        f(inp,n,i+1);
        swap(inp[i],inp[j]);
    }
}