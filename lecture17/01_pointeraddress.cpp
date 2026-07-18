#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<"x="<<x<<endl;
    cout<<"size of x"<<sizeof(x)<<endl;
    cout<<"adress of x :"<<&x<<endl;
    cout<<"size of x address "<<sizeof(&x)<<endl;

    char ch='C';
    cout<<"ch= "<<ch<<endl;
    cout<<sizeof(ch)<<endl;
        cout<<"adress of ch:"<<&ch<<endl;
    cout<<"size of ch address "<<sizeof(&ch)<<endl;

    return 0;
}