#include<iostream>
using namespace std;
void f(char inp[],int i){
    //base case 
    if(inp[i]=='\0'){
        return;
    }
    //recursive case
    //f(i) =it is a function that replaces all the "pi"<<"3.14"   in the inp[i...n-1]
    if(inp[i]=='p' and inp[i+1]=='i'){
int j=i+2;
while(inp[j]!='\0'){
    j++;
}


while(j>=i+2){
inp[j+2]=inp[j];
j--;
}
    
        //replace pi i and i+1    index with "3.14"

        inp[i]='3';
        inp[i+1]='.';
        inp[i+2]='1';
        inp[i+3]='4';

        //ask your friend to replace  pi at i,i+1 index   and shift inp{i+4...n-1]
        f(inp,i+4);
    }
    else{

        //ask your friend to replace "pi"  with 3.14 in inp[i+1..n-1]

        f(inp,i+1);
    }

}
int main(){




    char inp[20]="pip";
    f(inp,0);
    cout<<inp;
  return 0;
    
}