#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<numeric>
using namespace std;
bool f(int k,int n,const vector<int>& b,int timeLimit){
    //can k painters paint n boards of given length i given time limit
    // find out the no. of painters needed to paint n boards of given lengths in timelimit
    int x=1;
    int time=0;
    int i=0;
    while(i<n){
        // paint the ith board  ask the ith painter to paint ith board 
        time+=b[i];
        if(time>timeLimit){
            x++;
            time=0;
            continue;  // we wa

        }
        i++;

    }

    return x<=k;


}
int getMinTime(int k,int n,vector<int>&b){
//  int s=INT_MIN;
//  int e=0;
//  for(int i=0;i<n;i++){
//     s=max(s,b[i]);
//     e+=b[i];
//  }
int s=*max_element(b.begin(),b.end());

long long e = accumulate(b.begin(), b.end(), 0LL);
cout<<s<<endl;
cout<<e<<endl;


 int ans;
 while(s<=e){   // log(e-s)*n
    int m=s+(e-s)/2;
    //can k painters paint 'n' board of given length in 'm' unit of time 

    // int x=numberpaintersrequired(n,b,m);
    if(f(k,n,b,m)){
        ans=m;
        e=m-1;
    }
    else{
        s=m+1;
    }
 }
 return ans;
}

int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
 vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<getMinTime(k,n,b)<<endl;
}