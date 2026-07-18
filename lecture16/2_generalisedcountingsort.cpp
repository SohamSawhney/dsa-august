#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l,r;
    cin>>l>>r;
    vector<int>freq(r-l+1,0);
    for(int x:arr){
        if(x>=l && x<=r){
          freq[x-l]++;
        }
        
    }
    for(int i=0;i<=r-l;i++){
        for(int j=1;j<=freq[i];j++){
            cout<<i+l<<" ";
        }
    }
    return 0;
}