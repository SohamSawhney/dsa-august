#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int  trap(vector<int>&a){
    int n=a.size();
    int i=0;
    int j=n-1;
    int l=0;
    int r=0;
    int ans=0;
    while(i<=j){
        l=max(l,a[i]);
        r=max(r,a[j]);
        if(l<r){
            ans+=l-a[i];
            i++;
        }
        else{
            ans+=r-a[i];
            j--;
        }
    }
    return ans;

}
int main(){
    vector<int>a={4,2,0,3,2,5};
    cout<<trap(a);
}