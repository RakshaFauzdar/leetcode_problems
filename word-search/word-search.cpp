class Solution {
public:
    bool dfs(vector<vector<char>>&grid,int i,int j,int c,string&s)
    {
        if(c==s.size())
            return true;
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()  || grid[i][j]!=s[c])
            return false;
        
        char temp=grid[i][j];
        grid[i][j]='*';
        bool flag=dfs(grid,i+1,j,c+1,s) || dfs(grid,i,j+1,c+1,s) || dfs(grid,i-1,j,c+1,s) || dfs(grid,i,j-1,c+1,s);
        grid[i][j]=temp;
        return flag;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0] && dfs(board,i,j,0,word))
                {
                    return true;
                }
            }
        }
        return false;
    }
};