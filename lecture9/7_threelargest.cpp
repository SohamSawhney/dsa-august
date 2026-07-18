#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
     int largest=INT_MIN;
     int second=INT_MIN;
     int third=INT_MIN;
     int n=sizeof(arr)/sizeof(int);
     for(int i=0;i<n;i++){
        if(arr[i]>largest){
            third=second;
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=second){
          third=second;
          second=arr[i];
        }
        else if(arr[i]>third && arr[i]!=second && arr[i]!=largest){
            third=arr[i];
        }
     }
     cout<<largest;
     cout<<second;
     cout<<third;
}