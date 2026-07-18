//log(y)  tc


#include<iostream>
using namespace std;

int f(int x,int y){
    if(y==0){
        // find pow(x,0)
        return 1;
    }
    // f(x,y)=pow(x,y)
    //ask your friend to calculate pow(x,y/2)
    int A=f(x,y/2);
    if(y%2==0){
        return A*A;
    }
    else{
        return A*A*x;
    }


}
int main(){
    int x=2;
    int y=3;
    cout<<f(x,y);
}