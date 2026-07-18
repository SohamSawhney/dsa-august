#include<bits/stdc++.h>
using namespace std;
vector<int>sortKSorted(vector<int>&arr,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<=k;i++){
        pq.push(arr[i]);
    }
    int index=0;
    int n=arr.size();
    for(int i=k+1;i<n;i++){
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()){
           arr[index++]=pq.top();
           pq.pop();

    }

    return arr;

}



int main(){
    vector<int>arr={6,5,3,2,8,10,9};
    int k=3;

    vector<int>ans=sortKSorted(arr,k);

    for(int x:ans){
        cout<<x<<" ";
    }
}