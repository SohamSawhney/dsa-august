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
    int floorInBST(TreeNode*root,int key){
        int floor=-1;

        while(root!=NULL){
            if(root->data==key){
                floor=root->data;
                return floor;


            }

            if(key>root->data){
                floor=root->data;
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        return floor;
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

    Solution solution;
        int target = 8;
    int floorVal = solution.floorInBST(root, target);
    
    if(floorVal != -1){
        cout << "Floor of " << target << " is: " << floorVal << endl;
    }
    else{
        cout << "No floor found!" << endl;
    }
    
    return 0;

    
}