#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[]={-2,0,-1,2,-3,1,3};
    int n=sizeof(arr)/sizeof(int);
    int k=4;
    //time :0(n)
    //space 0(k)

    int i=0;   //store start of the window
    int j=0;   //store end of window 
    queue<int>q;   // store negative numbers 
   
    vector<int>ans;   // store fiers


    while(j<k){
        if(arr[j]<0){
            q.push(arr[j]);
        }
        j++;
    }

    if(!q.empty()){
        ans.push_back(q.front());
    }
    else{
        ans.push_back(0);
    }


   
    while(j<n){ 

        // slide the window 
        if(arr[i]<0){
            q.pop();
        }
        i++;
        if(arr[j]<0){
            q.push(arr[j]);
        }

        if(!q.empty()){
            ans.push_back(q.front());
        }
        else{  
            // no negative in the current window
            ans.push_back(0);
        }
       j++;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}