#include<bits/stdc++.h>
#define ll double
using namespace std;
bool f(vector<int>&k,int t,ll mid){
     int totaltime=0;
    for(int i=0;i<k.size();i++){
       
        if(totaltime<=mid){
            totaltime+=k[i]*t;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
      int n,t;
      cin>>n>>t;
      vector<int>k(n);
      for(int i=1;i<n;i++){
        cin>>k[i];
      }
      ll ans=1;
      ll low=1;
      ll high=2e23;
      while(low<=high){
         ll mid=low+(high-low)/2;
         if(f(k,t,mid)){
            ans=mid;
            high=mid-1;



         }
         else{
            low=mid+1;
         }

         

      }
      cout<<ans;


}