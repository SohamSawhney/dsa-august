#include<bits/stdc++.h>
using namespace std;
int connectropes(vector<int>&ropes){
    priority_queue<int,vector<int>,greater<int>>pq;
    int cost=0;
    for(int i=0;i<ropes.size();i++){
        pq.push(ropes[i]);
       

        while(pq.size()>1){
            int first=pq.top();
            pq.pop();

            int second=pq.top();
            pq.pop();

            int sum=first+second;
            cost+=sum;

        }
    }
    return cost;

}
int main(){
    vector<int>ropes={1,3,4,5};
    cout<<connectropes(ropes);
}