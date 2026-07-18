#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        int j=2;
        while(j*j<=i){
            if(i%j==0) break;
            j++;
        }
        if(j*j>i){
            cout<<i<<" ";
         }
    }

}