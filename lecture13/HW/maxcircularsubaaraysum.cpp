
//tc 0(n)
//sc o(1)
#include<iostream>
using namespace std;
int kadaneMin(int arr[],int n){
    int x=arr[0];
    int minso=x;
    for(int i=1;i<n;i++){
        x=min(x+arr[i],arr[i]);
        minso=min(minso,x);
    }
    return minso;
}
int kadaneMax(int arr[],int n){
    int x=arr[0];
    int maxso=x;
    for(int i=1;i<n;i++){
        x=max(x+arr[i],arr[i]);
        maxso=max(maxso,x);
    }
    return maxso;
}
int totalSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int  circularsum(int arr[],int n){
    int totalsum=totalSum(arr,n);
    int kadanemin=kadaneMin(arr,n);
    int kadanemax=kadaneMax(arr,n);
    int circularmaxsum=totalsum-kadanemin;

    if(kadanemax>0){
        return max(kadanemax,circularmaxsum);
    }
    else{
        return kadanemax;
    }

}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
cout<<circularsum(arr,n);

}