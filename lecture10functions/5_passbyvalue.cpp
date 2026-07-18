#include<iostream>
using namespace std;
void incr(int a){
    cout<<a<<endl;
    a++;
    cout<<a<<endl;

}
int main(){
    int a=0;
    cout<<a<<endl;
    incr(a);
    cout<<a<<endl;
    return 0;
}