#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[]={50,40,40,30,30,30,20,10,10};
    int n=sizeof(arr)/sizeof(int);
    int key=30;


    //searching for an element using find 

    auto it=find(arr,arr+n,key);
    if(it==arr+n){
        cout<<key<<"Not found"<<endl;

    }
    else{
        cout<<key<<"Found at"<<it-arr<<endl;       // it-arr/sizeof(int)   gives location 
    }


    // count occurence 

    key=30;
    cout<<count(arr,arr+n,key)<<endl;

    return 0;


}