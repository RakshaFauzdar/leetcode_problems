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
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        if(root==NULL)return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>v1;
            for(int i=0;i<s;i++)
            {
                TreeNode*t=q.front();
                q.pop();
                v1.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
                
            }
            int mx=*max_element(v1.begin(),v1.end());
            // return v1;
            
            v.push_back(mx);
            v1.clear();
        }
        return v;
        
    }
};