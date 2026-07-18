#include<bits/stdc++.h>
using namespace std;
int findTheCity(int n,vector<vector<int>>&edges,int distanceThreshold){
    vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
   for(auto it:edges){
    dist[it[0]][it[1]]=it[2];
    dist[it[1]][it[0]]=it[2];
   }

   for(int i=0;i<n;i++){
    dist[i][i]=0;
   }

   for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dist[i][k]==INT_MAX || dist[k][j]==INT_MAX){
                continue;
            }
            dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
        }
    }

   }


   int countcity=n;
   int citynumber=-1;
   for(int city=0;city<n;city++){
    int count=0;
    for(int adjcity=0;adjcity<n;adjcity++){
        if(dist[city][adjcity]<=distanceThreshold){
            count++;
        }
    }
    if(count<=countcity){
       countcity=count;
        citynumber=city;
    }
   }
   return citynumber;

}
int main(){
    int n=4;
    vector<vector<int>>edges={
        {0,1,3},
        {1,2,1},
        {1,3,4},
        {2,3,1}
    };
    int distanceThreshold=4;
    int ans=findTheCity(n,edges,distanceThreshold);
    cout<<ans;
}