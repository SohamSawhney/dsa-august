#include<iostream>
#include<climits>
using namespace std;
int main(){
char n;

  int maxcount1=0;
  int maxcount0=0;
  int count1=0;
  int count0=0;
  while(n!='\n'){
    cin.get(n);
    int mask=n&1;
   if(mask){
    maxcount0=0;
    count1++;
    maxcount1=max(count1,maxcount1);
    if(maxcount1>=7 ){
        cout<<"YES";
        break;
    }
   }
   else{
    count0++;
    maxcount1=0;
    maxcount0=max(count0,maxcount0);
    if(maxcount0>=7){
      cout<<"YES";
      break;
    }

    

   }
   n=n>>1;
   
  }
  if(maxcount0<7 && maxcount1<7){
    cout<<"NO";
  }

return 0;

}