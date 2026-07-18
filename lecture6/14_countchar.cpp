#include<iostream>
using namespace std;
int main(){
    char ch;
    
    int countA=0;
    int counta=0;
    int count1=0;
    int countS=0;

  while(true){
      ch=cin.get();
      if(ch=='$'){
        break;
    }
       else if(ch>='A' and ch<='Z'){
   countA ++;
   }
   else if(ch>='a' and ch<='z'){
    counta++;
   }
   else if(ch>='0' and ch<='9'){
    count1++;
   }
  
   else{
     countS++;
   }
  }
  cout<<countA<<endl;
  cout<<counta<<endl;
  cout<<count1<<endl;
  cout<<countS<<endl;
   return 0;
 }
