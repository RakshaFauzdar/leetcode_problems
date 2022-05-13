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
    
    int mx(TreeNode*root,int &mi)
    {
        if(root==NULL)return 0;
        
        int l=max(0,mx(root->left,mi));
        int r=max(0,mx(root->right,mi));
        mi=max(mi,root->val+l+r);
        return max(l,r)+root->val;
        
        
    }
    int maxPathSum(TreeNode* root) {
        int mx1=INT_MIN;
        mx(root,mx1);
        return mx1;
        
    }
};