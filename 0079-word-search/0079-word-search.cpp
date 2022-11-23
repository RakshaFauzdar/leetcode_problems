class Solution {
public:
    
    bool solve(vector<vector<char>>&v,string &s,int i,int j,int c)
    {
        
        if(c==s.size())
        {
            return true;
        }
        if(i<0 || j<0 || i>=v.size() || j>=v[0].size() || v[i][j]!=s[c])
        {
            return false;
        }
        char temp=v[i][j];
        v[i][j]='*';
        bool ans= solve(v,s,i+1,j,c+1) || solve(v,s,i-1,j,c+1) || solve(v,s,i,j+1,c+1) || solve(v,s,i,j-1,c+1);
        v[i][j]=temp;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n=board.size();
        int col=board[0].size();
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]==word[0] && solve(board,word,i,j,0))
                {
                    return true;
                }
            }
        }
        
        return false;
        
    }
};