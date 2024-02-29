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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode* curNode=root;
        q.push(curNode);
        
        bool isEven=true;
        while(!q.empty()){
            int size=q.size();
            int prev=INT_MAX;
            if(isEven) prev=INT_MIN;
            
            while(size--){
                curNode=q.front();
                q.pop();
                if(isEven and(curNode->val%2==0 || curNode->val<=prev)) return false;
                if(!isEven and (curNode->val%2==1 || curNode->val>=prev)) return false;
                
                prev=curNode->val;
                if(curNode->left) q.push(curNode->left);
                if(curNode->right) q.push(curNode->right);
            }
            isEven=!isEven;
        }
        return true;
    }
};