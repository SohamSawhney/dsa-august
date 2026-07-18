#include<iostream>
using namespace std;
void merge(int arr[],int s,int m,int e){
    // merge the two sorted subarrays arr[s...m]  and arr[m+1...e]
    //such that arr[s..e] becomes sorted  
   int temp[100];
   int i=s;
   int j=m+1;
   int k=s;

   while(i<=m and j<=e){
    if(arr[i]<arr[j]){
        temp[k]=arr[i];
        i++;
        k++;
    }
    else{
        temp[k]=arr[j];
        j++;
        k++;

    }
   }
   while(i<=m){
    temp[k]=arr[i];
    i++;
    k++;
   }
   while(j<=e){
    temp[k]=arr[j];
    j++;
    k++;
   }
   for(int x=s;x<=e;x++){
    arr[x]=temp[x];
   }


//    for(int i=s;i<=e;i++){
//     cout<<arr[i]<<" ";
// }

}
void f(int arr[],int s,int e){
    if(s==e){
        return;
    }
//recursive case 
// sort the array from index s to index e using the merge sort algorithm 
//divide the array around mid point 
    int m=s+(e-s)/2;
    f(arr,s,m);
    f(arr,m+1,e);
    


    merge(arr,s,m,e);


}
int main(){
    int arr[]={50,40,20,20,10};
    int n=sizeof(arr)/sizeof(int);
    f(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
  
}


















// class Solution {
// public:
// void merge(vector<int>&arr,int s,int m,int e){
//     // merge the two sorted subarrays arr[s...m]  and arr[m+1...e]
//     //such that arr[s..e] becomes sorted  
//   vector<int>temp(e-s+1);
//    int i=s;
//    int j=m+1;
//    int k=0;

//    while(i<=m and j<=e){
//     if(arr[i]<arr[j]){
//         temp[k]=arr[i];
//         i++;
//         k++;
//     }
//     else{
//         temp[k]=arr[j];
//         j++;
//         k++;

//     }
//    }
//    while(i<=m){
//     temp[k]=arr[i];
//     i++;
//     k++;
//    }
//    while(j<=e){
//     temp[k]=arr[j];
//     j++;
//     k++;
//    }
//    for (int k = 0; k < temp.size(); k++) {
//             arr[s + k] = temp[k];
//         }
// }
// int countpairs(vector<int>&nums,int low,int mid,int high){
//     int count=0;
//     int right=mid+1;
//     for(int i=low;i<=mid;i++){
//         while(right<=high and nums[i]>2*nums[right]) right++;
//         count+=(right-(mid+1));
//     }
//     return count;
// }
//    int mergesort(vector<int>&nums,int st,int end){
//     int cnt=0;
//     int mid=st+(end-st)/2;
//     if(st==end){
//         return 0;
//     }
//     cnt+=mergesort(nums,st,mid);
//     cnt+=mergesort(nums,mid+1,end);
//     cnt+=countpairs(nums,st,mid,end);

//     merge(nums,st,mid,end);

//     return cnt;


//    }
//     int reversePairs(vector<int>& nums) {
//         int n=nums.size();
//        return mergesort(nums,0,n-1);
//     }
// };