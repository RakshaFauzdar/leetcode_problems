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
    int solve(TreeNode*root,int&k,int&v)
    {
        if(root==NULL)
            return 0;
        solve(root->left,k,v);
        k--;
        if(k==0)
            v=root->val;
        solve(root->right,k,v);
        return v;
    }
    int kthSmallest(TreeNode* root, int k) {
        int a=0;
        solve(root,k,a);
        return a;
        
    }
};