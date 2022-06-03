class Solution {
public:
    int dist(pair<int, int>& p1,
         pair<int, int>& p2)
{
 
    return abs(p1.first - p2.first)
           + abs(p2.second - p1.second) - 1;
}
    void dfs(vector<vector<int>>&v,set<pair<int,int>>&s,int i,int j)
    {
        if(i<0 || j<0 || i>=v.size() || j>=v.size() || v[i][j]!=1)return;
        
        v[i][j]=0;
        s.insert({i,j});
        dfs(v,s,i+1,j);
        dfs(v,s,i-1,j);
        dfs(v,s,i,j+1);
        dfs(v,s,i,j-1);
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        set<pair<int,int>>s,s1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    if(s.empty()==true)
                    {
                        dfs(grid,s,i,j);
                    }
                    if(s1.empty() && !s.count({i,j}))
                    {
                        dfs(grid,s1,i,j);
                    }
                }
            }
        }
        int ans=INT_MAX;
        for(auto it:s)
        {
            for(auto it1:s1)
            {
                ans=min(ans,dist(it,it1));
            }
        }
        
        return ans;
        
    }
};