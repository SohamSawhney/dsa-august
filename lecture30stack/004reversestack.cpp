#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}
//we are  doing 3n+1  operation  that means  o(n)
void insertatBottom(stack<int>&s,int data){
  if(s.empty()){
    s.push(data);
    return;
  }


    int x=s.top();
    s.pop();

    insertatBottom(s,data);

    s.push(x);
}
//time 0(n^2)
//space 0(n)  due to function stack 
void reversestack(stack<int>&s){
    //base case 
if(s.empty()){
    return;
}


    //recursive case

    int x=s.top();
    s.pop();
    reversestack(s);
    insertatBottom(s,x)
}

int main(){
    stack<int>s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);

 
 int data=0;
 reversestack(s);
 print(s);


}