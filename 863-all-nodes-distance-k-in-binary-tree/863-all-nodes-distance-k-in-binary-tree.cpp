/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void solve(unordered_map<TreeNode*,TreeNode*>&m,TreeNode*root,TreeNode*target)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false)
        {
            TreeNode*c=q.front();
            q.pop();
            if(c->left)
            {
                m[c->left]=c;
                q.push(c->left);
            }
            if(c->right)
            {
                m[c->right]=c;
                q.push(c->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>m;
        solve(m,root,target);
        
        queue<TreeNode*>q;
        q.push(target);
        vector<int>v;
        unordered_map<TreeNode*,bool>vis;
        vis[target]=true;
        int level=0;
        while(q.empty()==false)
        {
            int s=q.size();
            if(level==k)break;
            level++;
            while(s--)
            {
                TreeNode*c=q.front();
                q.pop();
                
                if(c->left && !vis[c->left])
                {
                    q.push(c->left);
                    vis[c->left]=true;
                    
                }
                if(c->right && !vis[c->right])
                {
                    q.push(c->right);
                    vis[c->right]=true;
                }
                if(m[c] && !vis[m[c]])
                {
                    q.push(m[c]);
                    vis[m[c]]=true;
                }
            }
            
            // while(q.empty()==false)
            // {
            //     TreeNode*node=q.front();
            //     q.pop();
            //     v.push_back(node->val);
            // }
        }
        while(q.empty()==false)
            {
                TreeNode*node=q.front();
                q.pop();
                v.push_back(node->val);
            }
        return v;
    }
};