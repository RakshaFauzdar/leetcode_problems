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
    vector<int>in(TreeNode*root,vector<int>&v)
    {
        if(root==NULL)return v;
        
        in(root->left,v);
        v.push_back(root->val);
        in(root->right,v);
        return v;
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>v;
       in(root,v);
        unordered_map<int,int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        int mx=INT_MIN;
        for(auto it:m)
        {
            if(it.second>mx)
            {
                mx=it.second;
            }
        }
        vector<int>v1;
        for(auto it:m)
        {
            if(it.second==mx)
            {
                v1.push_back(it.first);
            }
        }
        return v1;
        
    }
};