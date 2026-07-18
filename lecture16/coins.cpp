#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
   int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int counta=0;
   int suma=0;
   int sumb=INT_MIN;
    
    for(int i=0;i<n;i++){
    suma+=arr[i];
    counta++;
    }
}