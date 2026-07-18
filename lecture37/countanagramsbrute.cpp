#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1,string s2){
    int cnt[26]={0};
    for(int i=0;i<s1.length();i++){
        cnt[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++){
        cnt[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]!=0){
            return false;
        }
    }
    return true;
}

int search(string& pattern,string& text){
    int res=0;
    for(int i=0;i<text.length()-pattern.length()-1;i++){
        int count=0;
        if(isAnagram(text.substr(i,pattern.length()),pattern)){
            res++;
        }
    }
    return res;
}
int main(){
    
        string text = "forxxorfxdofr";
    string pattern = "for";

    cout << search(pattern, text);

    return 0;
}