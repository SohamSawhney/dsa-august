#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main(){
    string s="aabacbebebe";
    int n=s.size();
    int k=3;
    int i=0;
    int j=0;
    int maxLen=0;


    int uniqCnt=0;



    //time 0(n)  assuming  map operatiobns are const 
    //space 0(sizeof freqmap)    0(26)
    unordered_map<char,int>freqMap;

    while(j<n){
        freqMap[s[j]]++;
        if(freqMap[s[j]]==1){
            uniqCnt++;
        }
        if(uniqCnt>k){



            while(uniqCnt>k){
                freqMap[s[i]]--;

                if(freqMap[s[i]]==0){
                    uniqCnt--;
                }
                i++;
            }
        }



    if(uniqCnt==k){
        maxLen=max(maxLen,j-i+1);
    }

        j++;
    }


  cout<<maxLen<<endl;

}