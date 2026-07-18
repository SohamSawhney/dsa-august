#include<iostream>
using namespace std;
int f(string s,int n){

    if(s.empty()){
         return 0;
    }

    //recursive case 
//1.ask   your friend to  convert the  substring that starts at index 0 and 
//a length  n-1 to an integer 
string substring=s.substr(0,n-1);
int integerfrommyFriend=f(substring,n-1);
return  integerfrommyFriend*10+(s[n-1]-'0');
}
int main(){
string s="12345";
int n=s.size();

cout<<f(s,n);
}
