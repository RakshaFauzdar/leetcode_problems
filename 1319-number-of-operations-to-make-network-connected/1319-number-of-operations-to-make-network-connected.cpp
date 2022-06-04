class Solution {
public:
    void dfs(unordered_map<int,vector<int>>&adj,vector<bool>&v,int node)
    {
        if(v[node])
            return;
        v[node]=true;
        
        for(auto x:adj[node])
        {
            if(v[x]==false)
            {
                dfs(adj,v,x);
            }
        }
    }
    
    int conn(vector<vector<int>>connect,int n,int m)
    {
        unordered_map<int,vector<int>>adj;
        int edge=0;
        
//         ->   form adjaceny list
//         ->   count no. of edges
        for(int i=0;i<m;i++)
        {
            adj[connect[i][0]].push_back(connect[i][1]);
            adj[connect[i][1]].push_back(connect[i][0]);
            
            edge++;
        }
        
        
//         ->  no. of connected components;
        vector<bool>vis(n,false);
        int com=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                com++;
                dfs(adj,vis,i);
            }
        }
        if(edge<n-1)
            return -1;
        
        int redudant=edge-((n-1)-(com-1));
        if(redudant>=com-1)
            return com-1;
        return -1;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int m=connections.size();
        int ope=conn(connections,n,m);
        return ope;
        
    }
};