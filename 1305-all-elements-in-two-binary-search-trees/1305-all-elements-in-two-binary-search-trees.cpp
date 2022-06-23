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
    
    map<int,int>m;
  
    void in(TreeNode*root)
    {
        if(root==NULL)return;
        else m[root->val]++;
        
        in(root->left);
       
        in(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        in(root1);
        in(root2);
        vector<int>v;
        for(auto it:m)
        {
            for(int i=0;i<it.second;i++)
            {
            v.push_back(it.first);
            }
        }
            
            
        return v;
    }
};