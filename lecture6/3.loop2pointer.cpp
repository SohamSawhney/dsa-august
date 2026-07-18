#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1,j=n;i<j;i++,j--){
        cout<<i<<" "<<j<<endl;;
    }
    cout<<endl;
    



    // 2 pointer aproach     kept i at starting  j at end  
    int i=1;
    int j=n;
    while(i<j){
        cout<<i<<" "<<j<<endl;
        i++;
        j--;
    }
}