#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcabcbb";
    int i=0;
    int j=0;
    int n=s.length();
    int maxLen=0;





    unordered_map<char,int>freqMap;




    while(j<n){

        freqMap[s[j]]++;
        j++;

        if(freqMap.size()<j-i+1){

        while(freqMap.size()!=j-i+1){
            freqMap[s[i]]--;




            i++;



        }
        }


        if(freqMap.size()==j-i+1){

            maxLen=max(maxLen,j-i+1);

        }

        
        
    }
    cout<<maxLen;
}