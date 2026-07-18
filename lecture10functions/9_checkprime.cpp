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

int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<n<<"is  prime"<<endl;
    }
    else{
        cout<<n<<"is not prime ";
    }
    	isprime(n) ? cout << n << " is prime" << endl : cout << n << " is not prime" << endl;

}