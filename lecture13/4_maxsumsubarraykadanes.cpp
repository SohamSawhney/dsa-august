#include<iostream>
using namespace std;
int kadaneoptimized(int arr[],int n){
   int x=arr[0];
   int maxso=x;
   for(int i=1;i<n;i++){
    x=max(x+arr[i],arr[i]);
    maxso=max(maxso,x);
   }
   return maxso;

}
int kadane(int arr[],int n){
    int x[n];
    x[0]=arr[0];
    int maxso=x[0];
    for(int i=1;i<n;i++){
        x[i]=max(x[i-1]+arr[i],arr[i]);
        maxso=max(maxso,x[i]);
    }
    return maxso;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    cout<<kadaneoptimized(arr,n)<<endl;
    cout<<kadane(arr,n);
}