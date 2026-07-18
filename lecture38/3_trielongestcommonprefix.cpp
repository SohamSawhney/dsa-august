#include<iostream>
#include<unordered_map>
using namespace std;
class node{
    public:
    char ch;
    bool terminal;
    unordered_map<char,node*>childMap;
    int freq;
    node(char ch){
        this->ch=ch;
        this->terminal=false;
        this->freq=0;
    }
};
class trie{
    node* root;
    int n;
    public:
    trie(){
        root=new node('#');
        n=0;
    }

    //time:0(len of str)
    void insert(string str){
        node*curr=root;
        n++;
        for(char ch:str){
            if(curr->childMap.find(ch)==curr->childMap.end()){
                curr->childMap[ch]=new node(ch);
            }
            curr=curr->childMap[ch];
            curr->freq++;
        }
        curr->terminal=true;

    }

    string longestCommonPrefix(string str){
        string ans="";
        node*curr=root;
        for(char ch:str){
            curr=curr->childMap[ch];
            if(curr->freq!=n) break;
            ans+=ch;
        }
        return ans;
    }
};

int main(){

     string words[]={"flow","floor","flys"};

    trie t;
    for(string& word:words){
        t.insert(word);
    }
    cout<<t.longestCommonPrefix(words[0])<<endl;
}












