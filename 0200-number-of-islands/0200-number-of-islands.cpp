class Solution {
public:
    void solve(vector<vector<char>>&grid,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0')
            return;
        grid[i][j]='0';
        // {
        solve(grid,i,j+1);
        solve(grid,i,j-1);
        solve(grid,i+1,j);
        solve(grid,i-1,j);
        // }
        // grid[i][j]='0';
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    c++;
                    solve(grid,i,j);
                }
            }
        }
        return c;
        
    }
};