#include<iostream>
using namespace std;
int targetsumoptimized(int arr[],int n,int t){
    int i=0;
    int j=n-1;
    int count=0;

    while(i<j){
        int pairsum=arr[i]+arr[j];
        if(pairsum==t){
       count++;
       i++;
       j--;
        }
        else if(pairsum<t){
            i++;
        }
        else{
            j--;
        }

    }
    return count;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    int t=60;
    cout<<targetsumoptimized(arr,n,t);

}