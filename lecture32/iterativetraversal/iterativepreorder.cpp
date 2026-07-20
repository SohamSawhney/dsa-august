#include <iostream>
#include<vector>
#include<stack>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode  *right;



    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};



vector<int>preorderTraversal(TreeNode* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }

    stack<TreeNode*>st;
    st.push(root);


    while(!st.empty()){
        TreeNode* node=st.top();
        st.pop();


        ans.push_back(node->val);


        if(node->right){
            st.push(node->right);

        }



        if(node->left){
            st.push(node->left);
        }



        return ans;
}


};



int main(){
        TreeNode* root=new TreeNode(1);
        root->left=new TreeNode(2);
        root->right=new TreeNode(3);
            root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int> preorder = preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int x : preorder) {
        cout << x << " ";
    }

    return 0;
}