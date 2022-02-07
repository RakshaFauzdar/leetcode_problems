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
    
    
    int d=0;
    TreeNode*lca;
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        help(root,0);
        return  lca;
        
    }
    int  help(TreeNode*root,int depth)
    {
        d=max(d,depth);
        if(!root)
            return depth;
        
        int l=help(root->left,depth+1);
        int r=help(root->right,depth+1);
        
        if(l==d && r==d)
        {
            lca=root;
        }
        
        return max(l,r);
        
    }
};