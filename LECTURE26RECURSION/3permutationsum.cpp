#include<iostream>
#include<vector>
using namespace std;
void generatepermutations(int t,vector<int>c,vector<int>& perm){
     //base case 
     if(t==0){
        for(auto x:perm){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
     }
     //todo 
     //recursive case 
     //generate permutations of 'c'   that sums upto 't'  or choose 
     //decide the next candidate 
     for(auto x:c){
        if(x<=t){
            perm.push_back(x);
            t=t-x;
            generatepermutations(t,c,perm);
            t=t+x;
            perm.pop_back();    //backtracking



            // perm.push_back(x);
            // generatepermutations(t-x,c,perm);
            // perm.pop_back();
        }
     }
     //todo..  
}

int main(){
    vector<int>c={2,3,5,7};
    int t=7;
    vector<int>perm;
    generatepermutations(t,c,perm);
    return 0;
}