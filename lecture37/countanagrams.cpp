#include<iostream>
#include<string>
using namespace std;
bool compareMap(int tFreqMap[],int wFreqMap []){
    for(int i=0;i<26;i++){
        if(tFreqMap[i]!=wFreqMap[i]){
            return false;

        }
    }
        return true;
    
}
int main(){
    string s="cbaebabacd";
    string t="abc";
    int n=s.size();
    int k=t.size();   //size of window

    int count=0;   // to store count of anagrams 
    int tFreqMap[26]={0};  // to store 
    for(int i=0;i<k;i++){
        tFreqMap[t[i]-'a']++;
    }
    

    int i=0;   // to store start of the window 
    int j=0;     // to store the end of the window 
    int wFreqMap[26]={0};  //store  mapping between characters 
    // present in window and their frequency 

    while(j<k){
        wFreqMap[s[j]-'a']++;
        j++;
    }

    if(compareMap(tFreqMap,wFreqMap)){
        count++;
    }
     while(j<n){
        // slide 
        wFreqMap[s[i]-'a']--;
        i++;
        wFreqMap[s[j]-'a']++;
        if(compareMap(tFreqMap,wFreqMap)){
            count++;
        }
        j++;
     }
     cout<<count<<endl;
}