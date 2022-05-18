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
    
    void vertical(TreeNode*root,int h,map<int,vector<int>>&m)
    {
        if(root==NULL)
            return;
        
        m[h].push_back(root->val);
        vertical(root->left,h-1,m);
        vertical(root->right,h+1,m);
    }
    
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,vector<int>>m;
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        int h=0;
       queue<pair<TreeNode*,int>>q;
        q.push(make_pair(root,h));
        
        
        while(q.empty()==false)
        {
            int s=q.size();
            map<int,vector<int>>m1;
            while(s--)
            {
               pair<TreeNode*,int>curr=q.front();
               q.pop();
               h=curr.second;
               TreeNode*node=curr.first;
            
            m1[h].push_back(node->val);
            if(node->left)
            {
                q.push(make_pair(node->left,h-1));
            }
            
            if(node->right)
            {
                q.push(make_pair(node->right,h+1));
            }
            }
            for(auto it:m1)
            {
                sort(it.second.begin(),it.second.end());
                m[it.first].insert(m[it.first].end(),it.second.begin(),it.second.end());
            }
        }
        for(auto it:m)
        {
            v.push_back(it.second);
        }
        
        
        return v;
        
    }
};