#include<iostream>
using namespace std;
int main(){

  int arr[]={2,3,2,4,0,2,0};
  int n=sizeof(arr)/sizeof(int);
  int k=6;

  int i=0;   //to store  start of the window
  int j=0;   // to store end of the window

  int maxlen=0;     //  to track length of longest window which has sum equals to k

  int wsum=0;    // to store window sum

  //  time :0(n)
  //space 0(1)
  while(j<n){


    // expand the window 
    wsum+=arr[j];



    if(wsum>k){


        // window prop is violaterd 
        // start shrinking till wsum<=k

        while(wsum>k){
        wsum-=arr[i];
        i++;
        }

    }


    // check for validity of the window 


    if(wsum==k){



        // you have found a valid window 
        maxlen=max(maxlen,j-i+1);
    }
   //      continue expansion of the windsow 

    j++;




  }

  cout<<maxlen;


  return 0;
}