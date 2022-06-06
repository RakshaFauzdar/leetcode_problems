class Solution {
public:
    vector<int>adj[100005];
    int dfs(int headID,vector<int>&informTime)
    {
        int mx=0;
        for(auto it:adj[headID])
        {
            mx=max(mx,dfs(it,informTime));
        }
        
        return mx+informTime[headID];
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        for(int i=0;i<n;i++)
        {
            if(manager[i]!=-1)
            {
                adj[manager[i]].push_back(i);
            }
        }
        
        
        return dfs(headID,informTime);
        
    }
};