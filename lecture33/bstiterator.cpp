#include<iostream>
#include<stack>
using namespace std;
struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};
class BSTIterator{
    private:
    stack<TreeNode*>st;
    void pushleft(TreeNode*node){
        while(node!=NULL){
            st.push(node);
            node=node->left;
        }

    }

    public:
    BSTIterator(TreeNode*root){
        pushleft(root);
    }
    int next(){
        TreeNode*node=st.top();
        st.pop();

        if(node->right){
            pushleft(node->right);
        }


        return node->val;
    }

    bool hasNext(){
        return !st.empty();
    }

};


int main(){
    TreeNode*root=new TreeNode(7);
    root->left=new TreeNode(3);
    root->right=new TreeNode(15);
    root->right->left=new TreeNode(9);
    root->right->right=new TreeNode(20);


    BSTIterator it(root);


    while(it.hasNext()){
        cout<<it.next()<<" ";
    }
}






// Aproach(BST iterator )   idea is to  simulate inorder traversal   left->root->right   using a stack   instead of recursion s
//Since the inorder traversal of a BST gives nodes in sorted order, every call to next() should return the next smallest element.


// constructor o(h)   pushes the left most most path where h  is the height of tree 
//  next() node pushed and poped at most once 
//hasNext()    o(1)

// space o(h)    for the stack  