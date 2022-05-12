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
    
    vector<string>solve(vector<string>&s,TreeNode*root,string t)
    {
        if(root==NULL)
         return s;
        
        if(root->left==NULL && root->right==NULL)
        {
            s.push_back(t);
            return s;
        }
        
        if(root->left)
        {
            solve(s,root->left,t+"->"+to_string(root->left->val));
        }
        
        if(root->right)
        {
            solve(s,root->right,t+"->"+to_string(root->right->val));
        }
        return s;
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>s;
        if(root==NULL)return s;
        
        
        solve(s,root,to_string(root->val));
        
        return s;
        
        
    }
};