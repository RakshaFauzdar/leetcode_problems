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
    
   
  
    void in(TreeNode*root,vector<int>&v)
    {
        if(!root)return;
        in(root->left,v);
        v.push_back(root->val);
        
       
        in(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        vector<int>v1;
        in(root1,v);
        in(root2,v1);
        int i=0,j=0;
        int n=v.size();
        int m=v1.size();
        vector<int>v2;
        while(i<n && j<m)
        {
            if(v[i]<=v1[j])
            {
               v2.push_back(v[i]);
                i++;
            }
            else if(v[i]>v1[j])
            {
                v2.push_back(v1[j]);
                j++;
            }
        }
        while(i<n)
        {
            v2.push_back(v[i]);
            i++;
        }
        while(j<m)
        {
            v2.push_back(v1[j]);
            j++;
        }
       
       
       
            
            
        return v2;
    }
};