#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   int arr[]={10,20,5,6,7};
int n=sizeof(arr)/sizeof(int);

vector<int>v={10,20,30,40,50};
reverse(v.begin(),v.begin()+4);
sort(arr,arr+n,greater<int>());      // sorting in decreassing 
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
