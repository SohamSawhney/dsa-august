#include<iostream>
using namespace std;
void f(int n,char src,char dst,char help){
  if(n==0){
    return;
  }
  f(n-1,src,help,dst);
  cout << "move disk from " << src << " to " << dst << endl;

  f(n-1,help,dst,src);
}
int main(){
  int n=3;
  f(n,'A','C','B');
}