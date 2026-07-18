#include<bits/stdc++.h>
using namespace std;
bool  f(string s,string p,int m,int n,int i,int j){
    if(i==m || j==n){
        return 
    }
    if(s[i]==p[j]){
        f(s,p,m,n,i+1,j+1);
    }

}
int main(){
    string s="abcabcaa";
    string p="a?c*?";
    int m=s.size();
    int p=s.size();
    f(s,p,m,p,0,0);
}