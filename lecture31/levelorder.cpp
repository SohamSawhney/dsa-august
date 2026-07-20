#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
class Solution{
    public:
    vector<vector<int>>levelorder(Node*root){
        vector<vector<int>>ans;

        if(!root) return ans;


        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();


            vector<int>level;

            for(int i=0;i<size;i++){
                Node*node=q.front();
                q.pop();


                level.push_back(node->data);
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }

            ans.push_back(level);
        }




       return ans;




    }


    vector<int>leftview(Node* root){
        vector<vector<int>>levels=levelorder(root);


        vector<int>left;

        for(auto& level:levels){
            left.push_back(level[0]);
        }

        return left;
    }


    vector<int> rightView(Node* root){
        vector<vector<int>>levels=levelorder(root);

        vector<int>right;


        for(auto& level:levels){
            right.push_back(level.back());
        }



        return right;
    }
};
int main() {
    // Manually create the binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    Solution obj;

    // Get level order traversal
    vector<vector<int>> levelOrder = obj.levelorder(root);
    cout << "Level Order Traversal:\n";
    for (auto& level : levelOrder) {
        for (int val : level) cout << val << " ";
        cout << "\n";
    }

    // Get left view
    vector<int> left = obj.leftView(root);
    cout << "Left View: ";
    for (int val : left) cout << val << " ";
    cout << "\n";

    // Get right view
    vector<int> right = obj.rightView(root);
    cout << "Right View: ";
    for (int val : right) cout << val << " ";
    cout << "\n";

    return 0;
}