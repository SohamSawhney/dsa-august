#include<iostream>
using namespace  std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(int);
    int *ptr=arr;
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
     int *ptr2=arr;

    for(int i=0;i<n;i++){
        cout<<ptr2[i]<<" ";
    }
    cout<<endl;
     int *ptr3=arr;

     for(int i=0;i<n;i++){
        cout<<*(ptr3+i)<<" ";
     
    }
}