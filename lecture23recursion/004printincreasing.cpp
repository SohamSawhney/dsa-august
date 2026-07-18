#include<iostream>
using namespace std;
void f(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive case

    f(n-1);
    cout<<n<<" ";
}
int main(){
    int n=5;
    f(n);
}


//time complexity 0(n)
//space complexity 0(n)  due to function call stack 