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
 TreeNode*solve(vector<int>&postorder,vector<int>&inorder,int i,int j,int a,int b)
{
    if(i>j || a>b)return NULL;
    TreeNode*node=new TreeNode(postorder[b]);
    int pos;
    for(int i=i;i<=j;i++)
    {
        if(inorder[i]==node->val)
        {
            pos=i;
            break;
        }
    }
    
    node->left=solve(postorder,inorder,i,pos-1,a,a+pos-i-1);
    node->right=solve(postorder,inorder,pos+1,j,a+pos-i,b-1);
    return node;
    
    
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return solve(postorder,inorder,0,inorder.size()-1,0,postorder.size()-1);
        
    }
};