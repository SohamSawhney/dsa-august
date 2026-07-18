#include<iostream>

using namespace std;
void f(int n,char out[],int i,int oc,int cc){
    // base case
    if(i==2*n){
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
     //recursive case 
     //f(i,oc,cc)    take decision for the remaining
     // positions out [i...2n-1]   st    oc '('  and  cc ')'
     //are used so far 


     //decide out[i]


     // option 1 use '('


     if(oc<n){
        out[i]='(';
        f(n,out,i+1,oc+1,cc);
     }

     if(cc<oc){
        out[i]=')';
        f
     }

    
}


int main(){
    int n=3;
    char out[17];
    f(n,out,0,0,0);
}
