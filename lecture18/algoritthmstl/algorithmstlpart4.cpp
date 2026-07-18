#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[]={50,40,40,30,30,30,20,10,10};
    int n=sizeof(arr)/sizeof(int);

    //finding element in  a sequence 
    cout<<*max_element(arr,arr+n)<<endl;
    // finding min element in asequence
    cout<<*min_element(arr,arr+n)<<endl;

    vector<int>v={10,20,-9,5};
    //finding element in  a sequence 
    cout<<*max_element(v.begin(),v.end())<<endl;
    // finding min element in asequence
    
   
    // finding min element in asequence




}