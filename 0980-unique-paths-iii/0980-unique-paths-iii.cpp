class Solution {
public:
    int walk=1;
    int ans=0;
    
    void dfs(int i,int j,vector<vector<int>>&grid,int count)
    {
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==-1)
        {
            return;
        }
        
        if(grid[i][j]==2 )
        {
           if(walk==count)
           {
               ans++;
           }
            return;
            
        }
        
        
        grid[i][j]=-1;
        
        dfs(i+1,j,grid,count+1);
        dfs(i-1,j,grid,count+1);
        dfs(i,j+1,grid,count+1);
        dfs(i,j-1,grid,count+1);
        
        grid[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int start_x,start_y;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    start_x=i;
                    start_y=j;
                }
                else if(grid[i][j]==0)
                {
                    walk++;
                }
            }
        }
        
        dfs(start_x,start_y,grid,0);
        return ans;
        
        
        
//         time complexity ->O(3^(M*N))
//           Space complexity -> recursive space stack or we can say O(1).
    }
};