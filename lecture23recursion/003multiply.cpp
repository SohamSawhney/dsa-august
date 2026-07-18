#include<iostream>
using namespace std;
int multiply(int x,int y ){

   if(y==0){
    return 0;
   }
    int a=multiply(x,y-1);
    return a+x ;
}
int main(){
    int x=6;
    int y=3;
    cout<<multiply(x,y);
}