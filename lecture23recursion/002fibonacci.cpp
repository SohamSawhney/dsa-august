#include<iostream>
using namespace std;
int f(int n){

if(n==1 or n==0){
    return n;
}

    int A=f(n-1);
    int B=f(n-2);
    return A+B;
}
int main(){
    int n=6;
    cout<<f(n);
}


//tc->o(2^n)  sc O(n)