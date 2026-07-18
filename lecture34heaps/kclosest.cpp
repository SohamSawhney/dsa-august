#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int>kclosest(vector<int>arr,int k,int x){
  priority_queue<pair<int,int>>pq;
  for(int i=0;i<arr.size();i++){
    pq.push({abs(arr[i]-x),arr[i]});
    if(pq.size()>k){
        pq.pop();
    }

  }

  vector<int>ans;

  while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
  }

  return ans;

}
int main(){
       vector<int>arr={7,10,4,3,20,15};
    int k=3;
    int x=3;
    vector<int>ans=kclosest(arr,k,x);


    for(int x:ans){
        cout<<x;
    }
}