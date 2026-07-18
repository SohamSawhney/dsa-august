#include<iostream>
#include<cstring>

using namespace std;
string movex(string s){
    if(s.length()==0){
        return "";

    }
    char ch=s[0];
    string smallans=movex(s.substr(1));
    if(ch=='x'){
        return smallans+ch;
    }
    else{
        return ch+smallans;
    }
}
int main(){
    string s="xabxc";
   cout<< movex(s);
}