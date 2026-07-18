#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of numbers";
    cin>>n;
    int max=INT_MIN;
     for(int i=0;i<n;i++){
        int m;
        cin>>m;
        if(m>max){
            max=m;
        }
     }
     cout<<max;
     return 0;
}



