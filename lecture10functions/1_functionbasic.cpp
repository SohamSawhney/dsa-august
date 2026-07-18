#include<iostream>
using namespace std;
void greet(){
    cout<<"Hello"<<endl;
}
// main is the entry point   for execution
int main(){
    cout<<"I am inside main() function and i  am yet to call greeet";
    greet();   // function call or invocation
    cout<<"I am inside main after calling greet";
    return 0;



} 