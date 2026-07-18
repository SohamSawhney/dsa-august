#include<iostream>
using namespace std;
#include<vector>
int merge(vector<int>& arr,int st,int mid,int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    int invcount=0;
    while(i<=mid and j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            invcount+=(mid-i+1);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[st+k]=temp[k];
    }
    return invcount;

}
int mergesort(vector<int>&arr,int st,int end){
   
    int mid=(st+end)/2;
    if(st==end){
        return 0;
    }
    int leftInvCount=mergesort(arr,st,mid);
    int rightInvCount=mergesort(arr,mid+1,end);

    int invCount=merge(arr,st,mid,end);

    return leftInvCount+rightInvCount+invCount;


}
int main(){
  
    int t;
    cin>>t;
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(200000);
        for(int i=0;i< 200000;i++){
            cin>>arr[i];
        }

        cout<<mergesort(arr,0,200000-1);
    }
   
}