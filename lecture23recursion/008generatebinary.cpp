#include<bits/stdc++.h>
using namespace std;
string f(int n){
    if(n==0){

        //f(0)  generate binary strring f(0)
        return "0";
    }

    //recursive case
    // f(n) genearate binary string for n
    //ask your friend to generate the binary string for n/2
    string  binarystringFromMyfriend=f(n/2);

    return  binarystringFromMyfriend + to_string(n%2);
}
int main(){
    int n=56;
    f(n);
}