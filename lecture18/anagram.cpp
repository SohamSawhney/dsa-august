#include<iostream>
using namespace std;


//time  n+n+26      assuming s1 and s2 =n
bool isanagram(char s1[],char s2[]){
    int f1[26]={0};
    for(int i=0;s1[i]!='\0';i++){
        char ch=s1[i];
        int idx=ch-'a';
        f1[idx]++;
    }

    // for(int i=0;i<26;i++){
    //     cout<<f1[i]<<" ";
    // }
    // cout<<endl;

      int f2[26]={0};
    for(int i=0;s2[i]!='\0';i++){
      f2[s2[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(f1[i]!=f2[i]){
            return false;
        }
    }

    return true;

}
int main(){
    char s1[]="state";
    char s2[]="taste";
    isanagram?cout<<"anagram"<<endl:cout<<"not anagram"<<endl;
}