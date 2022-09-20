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
    unordered_set<int>dp;
    vector<TreeNode*>v;
    void solve(TreeNode*&root)
    {
        if(root!=NULL)
        {
            solve(root->left);
            solve(root->right);
            if(dp.find(root->val)!=dp.end())
            {
                if(root->left)v.push_back(root->left);
                if(root->right)v.push_back(root->right);
                root=NULL;
                delete root;
            }
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
        
        for(auto it:to_delete)
        {
            dp.insert(it);
        }
        
        solve(root);
        if(root)
        {
            v.push_back(root);
        }
        return v;
        
        
    }
};