#include<iostream>
#include<vector>
using namespace std;
void  generateCombinations(int t,vector<int>c,vector<int>& comb,int i){
    //basse case 
    if(t==0){
        for(auto x:comb){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    //todo 
    //recursion case 
    //generate the combination of c[i...n-1] that sum up to 't'
    //decide the  next candidate 
    for(int j=i;j<c.size();j++){
    if(c[j]<=t){
        comb.push_back(c[j]);
        generateCombinations(t-c[j],c,comb,j);    //can take  if u can  repeat same element 
        comb.pop_back();
           generateCombinations(t-c[j],c,comb,j+1);//  pass j+1  if    you cannot  repeat same element

        //   generateCombinations(t,c,comb,j);

    }
    }

}
int main(){
    vector<int>c={2,3,5,7};
    int t=7;
    vector<int>comb;
    generateCombinations(t,c,comb,0);

}