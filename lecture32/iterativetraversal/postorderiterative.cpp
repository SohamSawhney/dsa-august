#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;


    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};


vector<int>postorderTraversal(TreeNode* root){

    vector<int>ans;
    if(root==NULL){
        return ans;
    }

    stack<TreeNode*>st;
    st.push(root);


    while(!st.empty()){
        TreeNode* temp=st.top();
        st.pop();



        ans.push_back(temp->val);


        if(temp->right){
            st.push(temp->right);
        }

        if(temp->left){
            st.push(temp->left);
        }
        

   

        
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
int main(){
    TreeNode* root=new TreeNode(1);

      root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int> postorder = postorderTraversal(root);

    cout << "postorder Traversal: ";
    for (int x : postorder) {
        cout << x << " ";
    }
    
}