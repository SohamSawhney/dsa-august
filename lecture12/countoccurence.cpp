
#include<iostream>
using  namespace std;
int lastoccurence(int arr[],int n,int target){
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==target){
            int ans=m;
            s=m+1;
        }
        else{
            if(target<arr[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
    }
    return ans;
}
int firstoccurence(int arr[],int n,int target){
    int idx=-1;
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==target){
            int idx=m;
        e=m-1;
        
        
        }
        else if(arr[m]<target){
        s=m+1;
        }
        else{
            e=m-1;
        }
       
    }
  
    
}
int main(){
int arr[]={10,20,30,30,30,30,40,50};
int n=sizeof(arr)/sizeof(int);
int target=30;
int foidx=firstoccurence(arr,n,target);
if(foidx==-1){
    cout<<0<<endl;
}
else{
    int loidx=lastoccurence(arr,n,target);
    int count=loidx-foidx+1;
    cout<<count;
    
}


}

