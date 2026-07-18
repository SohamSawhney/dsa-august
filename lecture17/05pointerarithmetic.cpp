#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *xptr=&x;
    cout<<xptr<<endl;
    xptr=xptr+1;
    cout<<xptr;
}