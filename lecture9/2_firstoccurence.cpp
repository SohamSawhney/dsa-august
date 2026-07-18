#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,10};
    int target=80;
    int n=sizeof(arr)/sizeof(int);
    int i;
    for(i=0;i<n;i++){
   if(arr[i]==target){
    cout<<i<<endl;
    break;
   }
    }
    if(i==n){
        cout<<"Target not found";
    }
}