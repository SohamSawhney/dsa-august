#include<iostream>
using namespace std;
bool isprime(int n){
    int i=2;
    while(i*i<=n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
void printprime(int m){
    for(int n=2;n<=m;n++){
        if(isprime(n)){
            cout<<n<<endl;
        }
    }
}
int main(){
    int m;
    cin>>m;
    printprime(m);
    return 0;
}