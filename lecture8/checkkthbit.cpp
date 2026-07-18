#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int mask=n>>k;
    cout<<(mask&1);


    if(mask&1==1){
        cout<<"set";
    }
    else{
        cout<<"Not set";
    }
    //  1  right shift  k    2^k
    return 0;
}