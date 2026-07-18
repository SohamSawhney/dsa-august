#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    if(n==0){
        cout<<a;
    
    }
    if(n==1){
        cout<<b;
    }
    for(int i=2;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;

    }
    cout<<b;
    
}



/*
int i=1;
while(i<=n-1){
int c=a+b;
a=b;
b=c;


}
cout<<c             this whileloop  format 


*/
//   time required for 0(n-1)
// space 0(1)