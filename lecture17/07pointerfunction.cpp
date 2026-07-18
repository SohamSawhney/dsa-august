#include<iostream>
using namespace std;
void increment(int & ref){
    ref++;
}
int main(){
    int a=0;
    increment(a);
    cout<<a;
}
