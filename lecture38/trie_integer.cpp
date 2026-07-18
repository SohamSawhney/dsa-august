#include<iostream>
using namespace std;
class node{
    public:
    node*left;
    node*right;
    node(){
        this->left=NULL;
        this->right=NULL;

    }
};
class trie{
    node*root;
    public:
    trie(){
        root=new node();

    }
    void insert(int n){
        node*curr=root;
        for(int i=31;i>=0;i--){
            int ithBit=(n>>i)&1;
            if(ithBit==0){
                if(curr->left==NULL){
                    curr->left=new node();
                }
            
            curr=curr->left;
        }
        else{
            // ith bit==1;
            if(curr->right==NULL){
                curr->right=new node();
            }

            curr=curr->right;

        }
    }
}
    bool search(int n){


        node*curr=root;
        for(int i=31;i>=0;i--){
            int ithBit=(n>>i)&1;
            if(ithBit==0){
                if(curr->left==NULL){
                    return false;
                }
                curr=curr->left;
            }
            else{
                if(curr->right==NULL){
                    return false;
                }
            }
        }


    }
};
int main(){
    int arr[]={2,4,8,5,10};
    int n=sizeof(arr)/sizeof(int);


    trie t;
    for(int i=0;i<n;i++){
        t.insert(arr[i]);
    }



    int brr[]={1,2,5,10,15,0};
    int m=sizeof(brr)/sizeof(int);


    for(int i=0;i<m;i++){
        t.search(brr[i])?cout<<"present":cout<<"not present";
    }
}