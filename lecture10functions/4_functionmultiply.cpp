#include<iostream>
using namespace std;
int multiply(int n,int m){
    int ans=n*m;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    cout<<multiply(n,m);
    int ans1=multiply(10,20)+90;
    return 0;
}