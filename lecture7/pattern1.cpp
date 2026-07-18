#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        char ch='A';
        for(char j=0;j<=n-i;j++){    //n-1 times 
         cout<<ch<<" ";
         ch++;
            
        }
        cout<<endl;
         
    }
}