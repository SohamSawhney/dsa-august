#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[]={10,10,20,30,50,60};
    int n=sizeof(arr)/sizeof(int);
    int key=30;

    // searching for a key in sorted array  using 0(logn)   steps using built in  binarysearch
    cout<<binary_search(arr,arr+n,key);


    //2..lower bound return address of 1st element >=key


    cout<<lower_bound(arr,arr+n,key)-arr<<endl;



    // upper bound for key in  a sortesd array using logn  step

    // return  address of first element greater than key 


    cout<<upper_bound(arr,arr+n,key)-arr<<endl;





    // counting occurences of key in a sorted array  in a sorted arrasy using o(logn)  steps

    cout<<upper_bound(arr,arr+n,key)-lower_bound(arr,arr+n,key);




}