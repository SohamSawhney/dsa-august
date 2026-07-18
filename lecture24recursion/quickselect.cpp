#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int i=s;
    int j=s;
    int pivot=arr[e];
    while(j<e){
        if(arr[j]<pivot){
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    swap(arr[i],arr[e]);
    return i;
}
int  quickselect(int arr[],int s,int e,int k){
    if(s==e){
        return arr[s];
    }
    int p=partition(arr,s,e);
    int leftcount=p-s+1;
    if(leftcount==k){
        return arr[p];
    }
    else if(k<leftcount){
        return quickselect(arr,s,p-1,k);
    }
    else{
        return quickselect(arr,p+1,e,k-leftcount);
    }
    return -1;

}
int main(){
    int arr[]={60,50,20,10,40,30};
    int n=sizeof(arr)/sizeof(int);
    int k=4;
    cout<<quickselect(arr,0,n-1,k);
}