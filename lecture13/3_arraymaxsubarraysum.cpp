#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    int psum[101];
    psum[0]=0;
    for(int i=1;i<=n;i++){
        psum[i]=psum[i-1]+arr[i-1];
    }
   
   int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=psum[j+1]-psum[i];
            maxsum=max(maxsum,sum);

        }
    }
    cout<<maxsum;
}