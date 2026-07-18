#include<iostream>
#include<algorithm>
using namespace std;

// used comparotor  for  sorting in decreasing order 


bool cmp(int a,int b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int arr[]={50,40,40,30,30,30,20,10,10};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n,&cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}