#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    if(n==0 || n==1){
        cout<<"True";
    }
    else {
       int a=0;
       int b=1;
       while(true){
        int c=a+b;

        if(c==n){
            cout<<"True"<<endl;
            break;
        }
        else if(c>n){
            cout<<"false";
            break;
        }
        else{
            a=b;
            b=c;

        }
       }
      
    }
     
    
}