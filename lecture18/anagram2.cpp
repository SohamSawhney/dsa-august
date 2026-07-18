#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1,string s2){


    vector<int>freq(26,0);
    if(s1.size()!=s2.size()){
        return false;
    }

    for(int i=0;i<s1.size();i++){
        freq[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        freq[s2[i]-'a']--;
    }
    for(int x:freq){
        if(x!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1="taste";
    string s2="state";
    isAnagram(s1,s2)?cout<<"yes true":cout<<"false ";
}
// TIME o(n)
//space o(1)







//Another aproach would be through hasmap   time 0(n)    space o(k)
