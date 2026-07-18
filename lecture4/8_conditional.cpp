#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote";
    }
    else{
       cout<<"you cannot vote";
    }

    cout<<"you are outside if";
    return 0;
}