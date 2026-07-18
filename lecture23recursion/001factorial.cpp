#include<iostream>
using namespace std;
int f(int n){
    if(n==0){
        // find 0!
        return 1;
    }
    // recursive case
    // f(n)=n!
    //ask your friend to find n-1!

    int A=f(n-1);
    return n*f(n-1);
}
int main(){
    int n=5;
   cout<<f(n);
}