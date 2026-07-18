#include<bits/stdc++.h>
using namespace std;

vector<int>replaceByrank(vector<int>&arr){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int x:arr){
        pq.push(x);
    }
    unordered_map<int,int>rank;
    int r=1;
    while(!pq.empty()){
        int x=pq.top();
        pq.pop();


        if(rank.find(x)==rank.end()){
            rank[x]=r++;
        }
    }
    vector<int>ans;
    for(int x:arr){
        ans.push_back(rank[x]);

    
    }

    return ans;

}

int main(){
    vector<int>arr={20,15,26,2,98,9};
    vector<int>ans=replaceByrank(arr);

    for(int x:ans){
        cout<<x<<" ";
    }
}


