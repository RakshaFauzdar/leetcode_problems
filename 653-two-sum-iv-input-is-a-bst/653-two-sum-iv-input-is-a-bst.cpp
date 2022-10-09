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
    void in(TreeNode*root,vector<int>& nums)
    {
        if(root==NULL)return;
        in(root->left,nums);
        nums.push_back(root->val);
        in(root->right,nums);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>nums;
        in(root,nums);
        int j=nums.size()-1;
        int i=0;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
                return true;
            
            
             if(nums[i]+nums[j]<k)
                i++;
            else
                j--;
        }
        return false;
       
        
    }
};