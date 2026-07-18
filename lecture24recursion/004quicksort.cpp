#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int i=s;
    int j=s;
    int pivot=arr[e];
    while(j<e){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else{
            j++;
        }

    }
    swap(arr[i],arr[e]);
    return i;    // pivot
}

void quicksort(int arr[],int s,int e){
if(s>=e){
    return;
}
int p=partition(arr,s,e);
quicksort(arr,s,p-1);
quicksort(arr,p+1,e);
}
int main(){
    int arr[]={50,40,20,20,10};
    int n=sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
  
}
