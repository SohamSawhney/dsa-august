//time 0(y)
//space 0(y)   due to function call stack 

#include<iostream>
using namespace std;

int f(int x,int y){
    if(y==0){
        // find pow(x,0)
        return 1;
    }
    int a=f(x,y-1);
    return a*x;
}
int main(){
    int x=2;
    int y=3;
    cout<<f(x,y);
}