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
       int k;
       cin>>k;
       vector<int>freq(k+1);
       for(int x:arr){
        freq[x]++;
       }

       for(int i=0;i<k;i++){
        for(int j=1;j<=freq[i];j++){
            cout<<i<<" ";
        }
       }

}