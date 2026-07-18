#include <iostream>
#include<cstring>
using namespace std;
bool palindrome(char s1[]){
    int n=strlen(s1);
 
    int i=0;;
    int j=n-1;
    while(i<j){
        if(s1[i]!=s1[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
  return true;
}

int main() {
  char s1[]="state";

  palindrome(s1)?cout<<"palindrome"<<endl:cout<<"Not palindrome"<<endl;
  

    return 0;
}