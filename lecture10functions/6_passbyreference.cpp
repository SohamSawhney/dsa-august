#include<iostream>
using namespace std;
void incr(int &ref){
    cout<<ref;  //0
    ref++;
    cout<<ref;  //1
}
int main(){
    int a=0;
    cout<<a<<endl;   //0
    incr(a);
    cout<<a<<endl;   //1

    return 0;
}
