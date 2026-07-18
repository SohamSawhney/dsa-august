#include<iostream>
using namespace std;
int main(){
    char str[101];
    // cin>>str;
    // cout<<str<<endl;

    cin.getline(str,101,'$');
    cout<<str;
}