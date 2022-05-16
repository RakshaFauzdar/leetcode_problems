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
   void in(TreeNode*root,vector<TreeNode*>&v)
   {
       if(root==NULL)
           return;
       v.push_back(root);
       in(root->left,v);
     
       in(root->right,v);
   }
    void find(TreeNode*root,long sum,int targetsum,int&c)
    {
        if(root==NULL)
            return;
        
        sum+=root->val;
        if(sum==targetsum)
        {
            c++;
        }
        find(root->left,sum,targetsum,c);
        find(root->right,sum,targetsum,c);

        
        
    }
    int pathSum(TreeNode* root, int targetSum) {
        
        vector<TreeNode*>v;
        in(root,v);
        int c=0;
        for(auto it:v)
        {
            find(it,0,targetSum,c);
        }
        
        return c;
            
            
        
    }
};