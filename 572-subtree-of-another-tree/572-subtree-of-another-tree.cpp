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
    
    bool is(TreeNode*a,TreeNode*b)
    {
        if(a==NULL || b==NULL)
            return a==b;
        
        return (a->val==b->val && is(a->left,b->left) && is(a->right,b->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(root==NULL)
            return false;
        
        if(subRoot==NULL)
            return true;
        
        if(is(root,subRoot))
            return true;
        
        
        return (isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
        
    }
};