#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool canpass(int h,vector<int>&a,int x){
    ll sum=0;
    for(auto i:a){
        if(h>=i) sum+=(h-i);
    }
    return sum<=x;

}
int main(){
    int t;
   cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(auto &i:a) cin>>i;
        ll ans=1;
        ll l=1,h=3e9;
        while(l<=h){
            ll mid=l+(h-l)/2;
            if(canpass(mid,a,x)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        cout<<ans;
     
    }
    return 0;
}