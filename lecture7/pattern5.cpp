#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n-n/2;
    
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i=1;i<=m-1;i++){
     for(int j=1;j<=m-i;j++){
        cout<<"*";
     }
     for(int j=1;j<=2*i-1;j++){
        cout<<" ";
     }
     for(int j=1;j<=m-i;j++){
        cout<<"*";
     }
     cout<<endl;

    }
    for(int i=1;i<=m-2;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-2*(i+1);j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }







    for(int i=1;i<=n;i++){
        cout<<"*";
    }
}