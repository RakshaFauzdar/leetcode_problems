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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        // vector<int>v;
        while(!q.empty())
        {
            
            root=q.front();
            q.pop();
            // if(root->left)q.push(root->left);
            
            if(root->right)q.push(root->right);
             if(root->left)q.push(root->left);
            // int s=q.size();
            // vector<int>v1;
            // for(int i=0;i<s;i++)
            // {
                // TreeNode*curr=q.front();
                // q.pop();
                // v1.push_back(curr->val);
                // if(curr->left)q.push(curr->left);
            //     if(curr->right)q.push(curr->right);
            // }
            // int mx=v1[0];
            // v.push_back(mx);
            // v1.clear();
            
        }
        return root->val;
        
    }
};