#include<iostream>
using namespace std;

int main(){
  int x=10;
 const  int *xptr=&x;
 *xptr=15;
}