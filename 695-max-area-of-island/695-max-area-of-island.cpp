class Solution {
public:
    
int dfs(int n,int m,int i,int j,vector<vector<int>>&v)
    {
        if(i<0 || j<0 || i>=n || j>=m || v[i][j]==0)
        {
            return 0;
        }
        v[i][j]=0;
        return 1+dfs(n,m,i+1,j,v)+
         dfs(n,m,i-1,j,v)+
         dfs(n,m,i,j+1,v)+
         dfs(n,m,i,j-1,v);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        // int c=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    
                  ans=max(ans,dfs(n,m,i,j,grid));
                }
            }
            // ans=max(ans,c);
        }
        return ans;
        
    }
};