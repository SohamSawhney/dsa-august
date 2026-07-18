
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int maxsum=INT_MIN;;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
             
            int sum=0;
           
            for(int k=i;k<=j;k++){       // i->j   //   works  case  o(n^3)
                sum+=arr[k];
            
            }
            maxsum=max(sum,maxsum);
           
        }
    }
    cout<<maxsum;
}

