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

class NodeValue{
    public:
         int minVal,maxVal,maxSum;
        
      NodeValue(int minVal,int maxVal,int maxSum)
      {
          this->minVal=minVal;
          this->maxVal=maxVal;
          this->maxSum=maxSum;
      }
    
};

class Solution {
public:
    
    int ans=0;
    NodeValue solve(TreeNode*root)
    {
        if(!root)
        {
            return {INT_MAX,INT_MIN,0};
        }
        auto left=solve(root->left);
        auto right=solve(root->right);
        if(left.maxVal<root->val && root->val<right.minVal)
        {
            int sum=left.maxSum+right.maxSum+root->val;
            ans=max(ans,sum);
            
            
            
            return {min(left.minVal,root->val),max(root->val,right.maxVal),sum};
        }
        
        
        
        return {INT_MIN,INT_MAX,max(left.maxSum,right.maxSum)};
        
    }
    int maxSumBST(TreeNode* root) {
        solve(root);
        return ans;
        
    }
};