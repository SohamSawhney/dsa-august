#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    cout<<(n^(1<<k));    //  1  right shift  k    2^k
    return 0;
}