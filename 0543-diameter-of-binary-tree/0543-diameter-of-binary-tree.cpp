/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int maxD=0;
    
    
    int DFS(TreeNode* node){
        if(node==nullptr) return 0;
        int leftD=DFS(node->left);
        int rightD=DFS(node->right);
        
        maxD=max(maxD, leftD+rightD);
        return max(leftD,rightD)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
     DFS(root);
        return maxD;
    }    
        
};