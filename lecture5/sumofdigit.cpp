#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n";
    cin>>n;
    int sum=0;
    while(n>0){
    sum+=n%10;
    n=n/10;
    }
    cout<<"the sum is"<<sum;
    return 0;
}