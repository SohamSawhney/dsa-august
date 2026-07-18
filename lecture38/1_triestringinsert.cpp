#include<iostream>
#include<unordered_map>
using namespace std;
class node{
    public:
    char ch;
    bool terminal;
    unordered_map<char,node*>childMap;
    node(char ch){
        this->ch=ch;
        this->terminal=false;
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
        }
        curr->terminal=true;

    }
    bool search(string str){

        node*cur=root;
        for(char ch:str){
            if(cur->childMap.find(ch)==cur->childMap.end()){
                return false;
            }
             cur=cur->childMap[ch];

        }
        return cur->terminal;

    }
};
int main(){

     string words[]={"code","coder","coding","block","blocks","news"};

    trie t;
    for(string& word:words){
        t.insert(word);
    }
string queries[] = {"code", "coding", "blocked", "block", "news", "new"};



    for(string& query:queries){
        t.search(query)?cout<<query<<"is present"<<endl:cout<<query<<"Not Found";
    }
    cout<<endl;
}