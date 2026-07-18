#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int kthsmallest(vector<int>&arr,int k){
    priority_queue<int>pq;  // max heap

    for(int i=0;i<k;i++){
        pq.push(arr[i]);  // insert first k elements
    }
    // process remaining elements 

    for(int i=k;i<arr.size();i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);

        }
    }


    return pq.top();
}


int main(){
    vector<int>arr={7,10,4,3,20,15};
    int k=3;
    cout<<"kth smallest element"<<kthsmallest(arr,k);
}