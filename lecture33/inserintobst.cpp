#include<bits/stdc++.h>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};
class Solution{
    public:
    TreeNode*insertIntoBST(TreeNode*root,int val){
        if(root==NULL){
            return new TreeNode(val);
        }
        TreeNode*curr=root;
        while(true){
            if(curr->data<=val){
                if(curr->right!=NULL){
                    curr=curr->right;
                }
                else{
                    curr->right=new TreeNode(val);
                    break;
                }

            }
            else{
                if(curr->left!=NULL){
                    curr=curr->left;
                }
                else{
                    curr->left=new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
    
};

int main(){
        // Creating a BST
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(13);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(2);
    root->left->left->right = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->left->right->right = new TreeNode(9);
    root->right->left = new TreeNode(11);
    root->right->right = new TreeNode(14);

    Solution obj;
       TreeNode* root=NULL;
       //Insert values

    root = obj.insertIntoBST(root, 10);
    root = obj.insertIntoBST(root, 5);
    root = obj.insertIntoBST(root, 15);
    root = obj.insertIntoBST(root, 3);
    root = obj.insertIntoBST(root, 7);
    root = obj.insertIntoBST(root, 12);
    root = obj.insertIntoBST(root, 18);



  
    
    return 0;

    
}