#include<iostream>
using namespace std;
int main(){
    char str[]={'a','b','c','d','\0'};
    cout<<str<<endl;   // will not print address  it will print value at that index
  for(int i=0;str[i]!='\0';i++){
    cout<<str[i]<<" ";
  }

    char str2[]="hello";
    cout<<str2<<endl;


}