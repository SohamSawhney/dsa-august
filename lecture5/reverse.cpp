#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. ";
    cin>>n;
    int reverse=0;
    while(n>0){
    int d=n%10;
    reverse=reverse*10+d;
    n=n/10;
    }
    cout<<"reversed no. is "<<reverse;
    return 0;
}