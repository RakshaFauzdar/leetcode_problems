class Solution {
public:
  
    bool isSafe(int i,int j,int n,int m)
    {
        if(i>=0 && i<n && j>=0 && j<m)
            return true;
        return false;
        
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        bool flag=false;
        int c=2;
        while(true)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==c)
                {
                    if(isSafe(i+1,j,n,m) && grid[i+1][j]==1)
                    {
                        grid[i+1][j]=grid[i][j]+1;
                        flag=true;
                    }
                    if(isSafe(i,j+1,n,m) && grid[i][j+1]==1)
                    {
                        grid[i][j+1]=grid[i][j]+1;
                        flag=true;
                    }
                    if(isSafe(i-1,j,n,m) && grid[i-1][j]==1)
                    {
                        grid[i-1][j]=grid[i][j]+1;
                        flag=true;
                    }
                    if(isSafe(i,j-1,n,m) && grid[i][j-1]==1)
                    {
                        grid[i][j-1]=grid[i][j]+1;
                        flag=true;
                    }
                }
            }
        }
        if(!flag)
            break;
        
        flag=false;
            c++;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        
        return c-2;
        
        
        
    }
};