#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=0;
    int i=2;
    while(i<sqrt(n)){
       if(n%i==0){
        flag=1;
        cout<<"not prime";
        break;
       } 
       i=i+1;
    }
    if(flag==0){
            cout<<"prime";
    }
    
    

}



