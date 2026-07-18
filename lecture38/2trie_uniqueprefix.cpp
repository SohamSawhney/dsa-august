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
    public:
    trie(){
        root=new node('#');
    }

    //time:0(len of str)
    void insert(string str){
        node*curr=root;
        for(char ch:str){
            if(curr->childMap.find(ch)==curr->childMap.end()){
                curr->childMap[ch]=new node(ch);
            }
            curr=curr->childMap[ch];
            curr->freq++;
        }
        curr->terminal=true;

    }
    string shortestUniquePrefix(string str){
        string ans="";
        node*curr=root;
        for(char ch:str){
            curr=curr->childMap[ch];
            ans+=ch;
            if(curr->freq==1){
                return ans;
            }
        }
        return "";   // there is no unique prefix
        }
};

int main(){

     string words[]={"code","coder","coding","block","blocks","news"};

    trie t;
    for(string& word:words){
        t.insert(word);
    }
}