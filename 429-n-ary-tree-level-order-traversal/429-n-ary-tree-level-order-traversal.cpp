/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>v1;
            while(s--)
            {
                Node*curr=q.front();
                q.pop();
                v1.push_back(curr->val);
               for(int i=0;i<curr->children.size();i++)
               {
                   q.push(curr->children[i]);
               }
                
            }
            v.push_back(v1);
        }
        return v;
        
    }
};