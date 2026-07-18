#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    cout<<arr[0];
    cout<<arr[1];
    cout<<arr[2]<<endl;
    int n=sizeof(arr)/sizeof(int);
    cout<<n;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    int m;
    cout<<"Enter the array elements";
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<endl;
    }
}