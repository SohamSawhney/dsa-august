#include<iostream>
using namespace std;
bool isEven(int num){  //value passed
if(num%2==0){
   return true;
}
// else{
//    return false;
// }
return false;
}
int main(){
int n;
cin>>n;
cout<<isEven(n);          // argument value passed 
cout<<endl;
if(isEven(7)){
    cout<<"Even";
}
else{
cout<<"odd";
} 

return 0;
}



//expression is something that  evaluate to a value 
//if function  call return something we can print it assign  
