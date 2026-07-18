#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;

   if(ch>='A' and ch<='Z'){
   cout<<"Upper case"<<endl;
   }
   else if(ch>='a' and ch<='z'){
    cout<<"lower case"<<endl;
   }
   else if(ch>='0' and ch<='9'){
    cout<<"number";
   }
   else{
    cout<<"special "<<endl;
   }
   return 0;
 }
