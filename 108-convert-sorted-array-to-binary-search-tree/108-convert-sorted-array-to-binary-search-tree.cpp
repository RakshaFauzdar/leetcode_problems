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
    
    TreeNode*f(vector<int>v,int s,int e)
    {
        if(s>=e)
            return NULL;
        
        
        int m=(s+e)/2;
        
        TreeNode*root=new TreeNode(v[m]);
        root->left=f(v,s,m);
        root->right=f(v,m+1,e);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return f(nums,0,nums.size());        
    }
};