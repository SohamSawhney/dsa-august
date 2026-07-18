#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    if(a>b && a>c){
        cout<<"a is largest";
    }
    else if(b>c){
        cout<<"b largest";
    }
    else{
        cout<<"c is largest";
    }
}