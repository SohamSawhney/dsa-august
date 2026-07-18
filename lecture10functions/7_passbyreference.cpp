#include<iostream>
using namespace std;
int myswap(int &a,int &b){
   cout<<a<<" "<<b<<endl;
     a=a^b;
     b=a^b;
     a=a^b;
    return a,b;
}
int main(){
    int a=-10;
    int b=20;
    cout<<a<<" "<<b<<endl;;
    myswap(a,b);
    cout<<a<<" "<<b<<"";

    
}