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
    vector<vector<int>>ans;
    void sum_(TreeNode*root,int sum,vector<int>path)
    {
        if(root==NULL)return;
        
        path.push_back(root->val);
        sum-=root->val;
        if(!root->left && !root->right && sum==0)
        {
            ans.push_back(path);
        }
        else
        {
            sum_(root->left,sum,path);
            sum_(root->right,sum,path);
        }
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>sum1;
        sum_(root,targetSum,sum1);
        return ans;
        
        
    }
};