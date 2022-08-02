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
   
    void solve(TreeNode*root,int&k,int&c)
    {
        if(root==NULL)
            return;
        solve(root->left,k,c);
        if(!k)return;
        c=root->val;
          k--;
        solve(root->right,k,c);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int c=0;
        solve(root,k,c);
        return c;
        
    }
};