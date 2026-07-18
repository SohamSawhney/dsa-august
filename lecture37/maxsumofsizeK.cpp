#include<iostream>
using namespace std;
int main(){






    int k=4;
    int arr[]={1,4,2,7,6,3,5};
    int n=sizeof(arr)/sizeof(int);

    //time:0(n)
    //space 0(1)
    int i=0;   //store start of window 
    int j=0;    //store end of window
    int wsum=0;   //  to store the window sum
    int maxsum;     // track maximum window sum

    // compute sum of 1st window 

    while(j<k){
        wsum+=arr[j];
        j++;
    }
    maxsum=wsum;
    while(j<n){
        wsum-=arr[i];
        i++;
        wsum+=arr[j];
        j++;
        maxsum=max(maxsum,wsum);

    }
    cout<<maxsum;
}