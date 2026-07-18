#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char str[]="INdia";
    cout<<str<<endl;
 int n=strlen(str);
 reverse(str,str+n);
 cout<<str;

 return 0;

}