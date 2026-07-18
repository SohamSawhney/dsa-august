#include<iostream>
#include<vector>
using namespace std;
class stack{
vector<int>v;
public:
  void push(int val){
    v.push_back(val);
  }
  void pop(){
    v.pop_back();
  }
  int size(){
    return v.size();
  }
  
};
int main(){
    stack s;




    s.push(10);
    s.push(20);
      s.push(30);
    s.push(40);
      s.push(50);
    s.push(20);


}