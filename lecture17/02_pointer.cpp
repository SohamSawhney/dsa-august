#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *xptr;
    xptr=&x;
    cout<<"x="<<x<<endl;
    cout<<sizeof(x)<<endl;
    cout<<"adress of x :"<<&x<<endl;
    cout<<"size of x address "<<sizeof(&x)<<endl;
    cout<<"xptr="<<xptr<<endl;
    cout<<"size of xptr"<<sizeof(xptr)<<endl;
    cout<<endl;



 double y=10.87;
    double *yptr=&y;
    cout<<"y="<<y<<endl;
    cout<<sizeof(y)<<endl;
    cout<<"adress of y :"<<&y<<endl;
    cout<<"size of y address "<<sizeof(&y)<<endl;
    cout<<"xptr="<<yptr<<endl;
    cout<<"size of xptr"<<sizeof(yptr)<<endl;
    cout<<endl;


}