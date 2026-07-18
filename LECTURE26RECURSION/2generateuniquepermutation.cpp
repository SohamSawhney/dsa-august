#include<iostream>
#include<cstring>
using namespace std;
void f(char inp[],int n, int i){

    if(i==n){
        cout<<inp<<endl;
        return ;
    }
    //base case 
    //recursive case 
    // f(i)=take decision for remaining position   i to n-1
    //decide char  for the ith position /index 
    for(int j=i;j<n;j++){
        bool flag=true;
        for(int k=j+1;k<n;k++){
            if(inp[k]==inp[j]){
                flag=false;
                break;
            }
        }
    if(flag){
          swap(inp[i],inp[j]);
        f(inp,n,i+1);
        swap(inp[i],inp[j]);
    }
    }
}

int main(){
    char inp[]="aabc";
    int n=strlen(inp);
    f(inp,n,0);
    cout<<inp;
}