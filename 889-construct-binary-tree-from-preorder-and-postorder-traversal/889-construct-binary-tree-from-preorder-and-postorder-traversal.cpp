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
    int pre_ind=0;
    TreeNode*solve(vector<int>&pre,vector<int>&pos,int pos_s,int pos_e)
    {
        if(pos_s>pos_e)return NULL;
        
        
        TreeNode* root=new TreeNode (pre[pre_ind]);
        ++pre_ind;
        if(pos_s==pos_e)
        {
            return root;
        }
        int p=pos_s;
        
        while(pos[p]!=pre[pre_ind])p++;
        root->left=solve(pre,pos,pos_s,p);
        root->right=solve(pre,pos,p+1,pos_e-1);
        
        return root;
        
        
        
        
        
        
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n=preorder.size();
        return solve(preorder,postorder,0,n-1);
        
    }
};