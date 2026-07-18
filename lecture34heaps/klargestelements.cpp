#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int>kthlargest(vector<int>&arr,int k){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;     // min heap;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }

    }

    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
    }

    return ans;
}


int main(){
       vector<int>arr={7,10,4,3,20,15};
    int k=3;

    vector<int>ans=kthlargest(arr,k);


    for(int x:ans){
        cout<<x;
    }
}
 