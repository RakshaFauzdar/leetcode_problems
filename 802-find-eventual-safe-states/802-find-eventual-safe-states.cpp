class Solution {
public:
    bool dfs(vector<vector<int>>&v,vector<int>&vis,int node)
    {
        vis[node]=1;
        for(auto it:v[node])
        {
            if((vis[it]==0 && dfs(v,vis,it)) || vis[it]==1)
                return true;
        }
        vis[node]=2;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        int m=graph[0].size();
        vector<int>v(n);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
           
                if(v[i]==2 || !dfs(graph,v,i))
                {
                    ans.push_back(i);
                }
            
        }
        return ans;
        
    }
};