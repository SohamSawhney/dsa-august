#include<iostream>
#include<set>
using namespace std;

set<string>st;
void f(char inp[],char out[],int i,int j,set<string> &st){
    //base case 

    if(inp[i]=='\0'){
        out[j]='\0';
    
        st.insert(string(out));
        return;
    }
    //recursive case 

    //f(i,j)=take decision for remaining n-i characters
    // in the inp[]    starting from index i st the next free
    // slot in the out[]   is at the j th index
    // decide for inp[i]

    // option 1 include inp[i]  in the out[]
    out[j]=inp[i];
    f(inp,out,i+1,j+1);


    // option 2 exclude inp[i]  from the out[]
    f(inp,out,i+1,j);




}



int main(){
    char inp[]="abc";
    char out[10];
    set<string>st;
    f(inp,out,0,0,st);

    set<string>st;




    cout<<st.size()<<endl;

    for(string subseq: st){
        cout<<subseq<<endl;
    }

}