#include<iostream>
using namespace std;
void f(int n,char out[],int i,int oc,int cc){
    //base case 
    if(i==2*n){
        out[i]=='\0';
        cout<<out<<endl;
        return;
    }
    //recursive case 
    // f(i,oc,cc): takes decision for eremaining
 // positions out [i...2n-1]        s.t oc '('    and cc ')'
 //are use so far



// option 1 use '('




    if(oc<n){
        out[i]='(';
        f(n,out,i+1,oc+1,cc);
    }
    if(cc<n){
        out[i]=')';
        f(n,out,i+1,oc,cc+1);
    }
    
   
}


int main(){
    int n=4;
    char out[17];   //based on constraints

f(n,out,0,0,0);
return 0;

}