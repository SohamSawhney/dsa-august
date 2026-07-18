#include<bits/stdc++.h>
using namespace std;
vector<int>topkfrequent(vector<int>&arr,int k){
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;



  for(auto it:mp){
    pq.push({it.second,it.first});

    if(pq.size()>k){
        pq.pop();
    }
}

    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }


  reverse(ans.begin(),ans.end());


  return ans;
}
int main(){
     vector<int>arr={1,1,1,3,2,2,4};
     int k=2;

     vector<int>ans=topkfrequent(arr,k);
     for(int x:ans){
        cout<<x;
     }
}