#include<iostream>
using  namespace std;
int binarysearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==target){
        return m;
        }
        else if(arr[m]<target){
        s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return -1;
}
int main(){
int arr[]={10,20,30,40,50};
int n=sizeof(arr)/sizeof(int);
int target=50;
cout<<binarysearch(arr,n,target);
}






//int mid=s+(e-s)/2