class Solution {
public:
    int dfs(int i,int j,vector<vector<char>>&s,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m)return 0;
       
        if(s[i][j]=='1')
        {
          s[i][j]=0;
            int x=dfs(i,j+1,s,n,m);
            int y=dfs(i,j-1,s,n,m);
            int z=dfs(i+1,j,s,n,m);
            int w=dfs(i-1,j,s,n,m);
            if(x+y+z+w>=1)
            {
                return 1;
            }
        }
        return 0;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if( grid[i][j]=='1')
                {
                    dfs(i,j,grid,n,m);
                    c++;
                   
                }
            }
        }
        
        return c;
        
    }
};