/**
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
    int maxD;
    int bottomL;
    
    void DFS(TreeNode* node , int depth){
        if(node==nullptr) return;
        
        if(depth>maxD){
            maxD=depth;
            bottomL=node->val;
        }
        
        DFS(node->left,depth+1);
        DFS(node->right,depth+1);
        
    }
    
    
    int findBottomLeftValue(TreeNode* root) {
       //to find the lastmost on the left in last row
        //start with first row, and check children exists, if so pop the parent anf move to next row
       // keep pushing in vector and. removing along side
    //    at the start of each level put the fist element as answer 
    maxD=-1;
        bottomL=0;
        DFS(root,0);
        return bottomL;
    }
};