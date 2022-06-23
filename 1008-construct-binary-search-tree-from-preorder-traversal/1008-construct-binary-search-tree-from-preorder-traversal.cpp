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
    TreeNode*construct(vector<int>preorder,int l,int h,int n,int *preindex)
    {
        if(*preindex>=n || l>h)
            return NULL;
        TreeNode*root=new TreeNode(preorder[*preindex]);
        *preindex=*preindex+1;
        if(l==h)
            return root;
        int i;
        for(i=l;i<=h;i++)
        {
            if(preorder[i]>root->val)
            {
                break;
            }
        }
        root->left=construct(preorder,*preindex,i-1,n,preindex);
        root->right=construct(preorder,i,h,n,preindex);
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int preindex=0;
        int n=preorder.size();
        TreeNode*root =construct(preorder,0,n-1,n,&preindex);
        return root;
        
        
    }
};