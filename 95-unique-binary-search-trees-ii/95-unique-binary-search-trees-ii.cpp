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
    vector<TreeNode*>find(int start,int end)
    {
        vector<TreeNode*>v;
        if(start>end)
        {
            v.push_back(NULL);
                return v;
        }
        for(int i=start;i<=end;i++)
        {
            vector<TreeNode*>left=find(start,i-1);
            vector<TreeNode*>right=find(i+1,end);
            
            for(auto j:left)
            {
                
                for(auto k:right)
                {
                   
                    TreeNode*root=new TreeNode(i);
                    root->left=j;
                    root->right=k;
                    v.push_back(root);
                }
            }
        }
        return v;
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*>v=find(1,n);
        return v;
    }
};