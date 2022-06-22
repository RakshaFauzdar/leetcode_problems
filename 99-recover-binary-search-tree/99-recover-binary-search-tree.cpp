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
    void find(TreeNode*root,int a,int b)
    {
        if(!root)return;
        find(root->left,a,b);
        if(root->val==a)
        {
            root->val=b;
        }
        else if(root->val==b)
        {
            root->val=a;
        }
        find(root->right,a,b);
    }
    void inorder(TreeNode*root,vector<int>&v)
    {
        if(!root)return;
        
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    void recoverTree(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        vector<int>v1=v;
        sort(v1.begin(),v1.end());
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            if(v[i]!=v1[i])
            {
                find(root,v[i],v1[i]);
                break;
            }
        }
        
    }
};