#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int xor1=0;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        xor1=xor1^num;
    }
    cout<<xor1;  
}


// tc o(n)
//sc 0(1)