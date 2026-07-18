#include<iostream>
using namespace std;
void isEven(int num){
if(num%2==0){
    cout<<"True";
}
else{
    cout<<"False";
}
}
int main(){
int n;
cin>>n;
isEven(n);
return 0;
}
