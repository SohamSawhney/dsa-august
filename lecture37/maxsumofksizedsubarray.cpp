#include<iostream>
using namespace std;
void f(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[]={1,4,2,7,6,3,5};
    int n=sizeof(arr)/sizeof(int);
    f(arr,n);
}