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
    int mini=0;
    int res=INT_MAX;
    int prev=INT_MIN;
    void inorder(TreeNode*root)
    {
        if(!root)return;
        
        inorder(root->left);
        if(prev>=0)
        {
            res=min(root->val-prev,res);
        }
        prev=root->val;
        
      
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
       
        inorder(root);
        return res;
       
        
    }
};