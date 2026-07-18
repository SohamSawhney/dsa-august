// o(n^3)
// we have n^2 subarrays to print each  

#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           
            for(int k=i;k<=j;k++){       // i->j   //   works  case  o(n^3)
                cout<<arr[k]<<" ";
            
            }
            cout<<endl;
        }
    }
}


