#include<bits/stdc++.h>
using namespace std;
void frequencysort(vector<int>&arr){
    unordered_map<int,int>mp;
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<arr.size();i++){
       mp[arr[i]]++;
    }
   for(auto it:mp){
      pq.push({it.second,it.first});

   }

   while(pq.size()>0){
    int freq=pq.top().first;
    int dc=pq.top().second;
    for(int i=1;i<=freq;i++){
        cout<<dc;
    }
    pq.pop();
   }
}
int main(){
    vector<int>arr={1,1,1,2,2,3,4};

    frequencysort(arr);
}