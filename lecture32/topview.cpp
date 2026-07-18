#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
struct Node {
    // Value stored in the node
    int data;
    // Pointer to the left child
    Node* left;
    // Pointer to the right child
    Node* right;
    // Constructor to initialize a node with a value
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution
{
    public:

    vector<int>topView(Node *root){
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
       map<int,int>mpp;
       queue<pair<Node*,int>>q;
       q.push({root,0});
       while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int line=it.second;
        if(mpp.find(line)==mpp.end()){
            mpp[line]=node->data;
        }
        if(node->left!=NULL){
            q.push({node->left,line-1});
        }
        if(node->right!=NULL){
            q.push({node->right,line+1});
        }
       }

       for(auto it:mpp){
        ans.push_back(it.second);
       }

    }

};


int main() {
    // Create the sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->left->left->right = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(3);
    root->right->right = new Node(10);
    root->right->left = new Node(9);

    // Create a Solution object
    Solution solution;

    // Get the top view
    vector<int> result = solution.topView(root);

    // Print the top view traversal
    cout << "Top View Traversal: ";
    for (auto node : result) {
        cout << node << " ";
    }
    return 0;
}




















// Time Complexity: O(N) where N is the number of nodes in the Binary Tree. This complexity arises from visiting each node exactly once during the BFS traversal.

// Space Complexity: O(N/2 + N/2) where N represents the number of nodes in the Binary Tree. The main space consuming data structure is the queue used for BFS traversal. It acquires space proportional to the number of nodes in the level it is exploring hence in the worst case of a balanced binary tree, the queue will have at most N/2 nodes which is the maximum width.Additionally, the map is used to store the top view nodes based on their vertical positions hence its complexity will also be proportional to the greatest width level. In the worst case, it may have N/2 entries as well.

