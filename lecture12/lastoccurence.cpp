#include<iostream>
using namespace std;
int lastoccurence(int arr[],int n,int target){
    int s=0;
 
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==target){
            ans=m;
            s=m+1;

        }
        else{
            if(target<arr[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }

        }
     

    }
    return ans;
}
int main(){
    int arr[]={10,20,30,40,40};
    int target=40;
    int n=sizeof(arr)/sizeof(int);
    cout<<lastoccurence(arr,n,target);
}