#include<bits/stdc++.h>
using namespace std;
class solution{
private:
vector<int>toposort(int V,vector<int>adj[]){
    vector<int>indegree(V,0);
    for(int i=0;i<V;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    queue<int>q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int>topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto neighbour:adj[node]){
            indegree[neighbour]--;

            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
    }

    return topo;
}
public:
string findOrder(string dict[],int N,int K){
    vector<int>adj[K];
    for(int i=0;i<N-1;i++){
        string s1=dict[i];
        string s2=dict[i+1];
        int len=min(s1.size(),s2.size());


        for(int ptr=0;ptr<len;ptr++){
            if(s1[ptr]!=s2[ptr]){
                adj[s1[ptr]-'a'].push_back(s2[ptr]-'a');
                break;
            }
        }
    }

    vector<int>topo=toposort(K,adj);


    string ans="";
    for(auto node:topo){
        ans+=char(node+'a');
    }
    return ans;
}
};
int main(){
    int N=5,K=4;
    string dict[]={"baa","abcd","abca","cab","cad"};
    solution obj;
   string ans=obj.findOrder(dict,N,K);
   for(auto ch:ans){
    cout<<ch<<" ";
   }
   cout<<endl;

   return 0;
  
}