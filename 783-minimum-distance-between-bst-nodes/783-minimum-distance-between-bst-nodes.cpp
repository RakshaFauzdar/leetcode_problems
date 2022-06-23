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
    int ans=INT_MAX;
    void inorder(TreeNode*root,vector<int>&v)
    {
        if(!root)return;
        
        inorder(root->left,v);
       v.push_back(root->val);
        inorder(root->right,v);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        int ans=INT_MAX;
        int n=v.size();
        for(int i=1;i<n;i++)
        {
            ans=min(ans,v[i]-v[i-1]);
        }
        
        return ans;
        
    }
};