#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,50,10};
    int n=sizeof(arr)/sizeof(int);
    int target=10;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i<<" ";
            flag=true;
        }
    }
    if(flag==false){
        cout<<"Element not found";
    }
}