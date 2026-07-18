#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    int seerja=0;
    int dima=0;
    int chosen;
   
    bool turn=true;
    while(i<=j){
        if(arr[i]>arr[j]){
            chosen=arr[i];
         
            i++;
        }
        else{
         chosen=arr[j];
            j--;
        }

        if(turn){
          seerja+=chosen;
        }
        else{
            dima+=chosen;

        }
        turn=!turn;

    }
    cout<<seerja<<" ";
    cout<<dima;
}



//0(n)