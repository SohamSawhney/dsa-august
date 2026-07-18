#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    int temp[n]={0};
    int k;
    cin>>k;
    k=k%n;
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    int i;
    for(i=0;i<n;i++){
    cout<<temp[i]<<" ";
    }

}