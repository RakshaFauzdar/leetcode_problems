/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node*node,Node*copy,vector<Node*>&v)
    {
        v[copy->val]=copy;
        for(auto it: node->neighbors)
        {
            if(v[it->val]==NULL)
            {
                Node*n=new Node(it->val);
                (copy->neighbors).push_back(n);
                dfs(it,n,v);
            }
            else
            {
                copy->neighbors.push_back(v[it->val]);
            }
        }
        
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        vector<Node*>v(1000,NULL);
        Node*c=new Node(node->val);
        dfs(node,c,v);
        return c;
        
        
    }
};