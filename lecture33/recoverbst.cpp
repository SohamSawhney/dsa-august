#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Info{
    public:
    int Min,Max,sz;
    Info(int mi,int ma,int size){
        Min=mi;
        Max=ma;
        sz=size;
    }
};
Info helper(Node*root){
    if(root==NULL){
        return Info(INT_MAX,INT_MIN,0);
    }
Info left=helper(root->left);
Info right=helper(root->right);
if(root->data>left.Max && root->data<right.Min){
    int currMin=min(root->data,left.Min);
    int currMax=max(root->data,right.Max);
    int currSz=left.sz+right.sz+1;
    return Info(currMin,currMax,currSz);
}
return Info(INT_MIN,INT_MAX,max(left.sz,right.sz));
}
int largestBST(Node*root){
    Info info=helper(root);
    return info.sz;
}


int main(){
    Node*root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(15);
    root->left->left=new Node(1);
    root->left->right=new Node(8);
    root->right->right=new Node(7);
    cout<<largestBST(root)<<endl;
}