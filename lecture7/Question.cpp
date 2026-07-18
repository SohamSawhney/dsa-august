#include<iostream>
using namespace std;
int main(){
    int countA=0;
    int countB=0;
    int n;
    cin>>n;
    char ch;
    for(int i=1;i<=n;i++){
     
       cin>>ch;
       if(ch=='A'){
        countA++;
       }
       else{
        countB++;
       }
    }
    if(countA>countB){
        cout<<"Anton";
    }
    else if(countB>countA){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";


    }
    return 0;
}