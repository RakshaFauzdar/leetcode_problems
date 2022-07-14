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
    int preIndex=0;
    unordered_map<int,int>mp;
    TreeNode*solve(vector<int>&preorder,vector<int>&inorder,int start,int end)
    {
        if(start>end)
            return NULL;
        
        TreeNode*node=new TreeNode(preorder[preIndex++]);
        int pos=mp[node->val];
        
        // for(int i=start;i<=end;i++)
        // {
        //     if(inorder[i]==node->val)
        //     {
        //         pos=i;
        //         break;
        //     }
        // }
        node->left=solve(preorder,inorder,start,pos-1);
        node->right=solve(preorder,inorder,pos+1,end);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        int ans=0;
        return solve(preorder,inorder,0,inorder.size()-1);
        
        
    }
};