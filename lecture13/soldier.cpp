#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int a[n];
    int max_value=0;
    int min_value=110;
    int mini=0,maxi=0;

    for(int i=0;i<n;i++){
      cin>>a[i];
     
      if(a[i]>max_value){
        maxi=i;
        max_value=a[i];
      }
     if (a[i] <= min_value) {
    mini = i;
    min_value = a[i];
}
    }
   int moves=(maxi-1)+(n-mini);
   if(maxi>mini) moves--;
   cout<<moves;
    return 0;
}