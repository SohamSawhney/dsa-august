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
        
    }
}