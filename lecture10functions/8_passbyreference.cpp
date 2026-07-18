#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &b=a;
    cout<<a<<b;
    int c=20;
    b=c;
    b++;
    cout<<a<<b<<c<<"";







    
}