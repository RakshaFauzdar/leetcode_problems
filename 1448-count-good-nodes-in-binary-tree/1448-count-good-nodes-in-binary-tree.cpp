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
    int traverse(TreeNode*root,int mx)
    {
        if(root==NULL)return 0;
        
        if(root->val>=mx)
        {
            return traverse(root->left,root->val)+traverse(root->right,root->val)+1;
        }
        
        
        return traverse(root->left,mx)+traverse(root->right,mx);
    
        
    }
    int goodNodes(TreeNode* root) {
      
        return traverse(root,root->val);
        
        
    }
};