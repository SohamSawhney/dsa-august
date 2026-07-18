#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>=91 && marks<=100){
        cout<<"A";
    }
        else if(marks>=81 && marks<=90){
        cout<<"B";
    }
        else if(marks>=71 && marks<=80){
        cout<<"C";
    }
        else if(marks>=61 && marks<=70){
        cout<<"D";
    }
    else{
        cout<<"F";
    }
    return 0;
}