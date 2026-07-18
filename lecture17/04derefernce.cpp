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

    cout<<"x value"<<*xptr;



    double y=100.908;
    double *dxptr=&y;

    cout<<"y valuer is"<<*dxptr;
    cout<<endl;

    int z=100;
    char* ptr=(char*)&z;
    cout<<(int)*ptr<<endl;


}