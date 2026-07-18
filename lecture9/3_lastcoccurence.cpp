#include<iostream>
using namespace std;
int main(){
    int n;
    
    int arr[5]={10,20,30,50,70};
    int target=10;
    n=sizeof(arr)/sizeof(int);
    int i;
    for(i=n-1;i>=0;i--){
     if(arr[i]==target){
     cout<<i;
     break;
    }
}
if(i==-1){
    cout<<"Element not found";
}



}