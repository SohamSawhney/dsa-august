#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=a++;
cout<<a<<endl;
cout<<b<<endl;
int c=20;
int& d=c;
d++;
cout<<c<<endl;
cout<<d<<endl;
int&e=c;
e++;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
}