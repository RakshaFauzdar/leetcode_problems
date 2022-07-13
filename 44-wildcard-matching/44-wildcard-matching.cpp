class Solution {
public:
    bool solve(string &s,string &pat,int i,int j,vector<vector<int>>&dp)
    {
//         base cases
        if(i<0 && j<0)return true;
        if(i>=0 && j<0)return false;
        if(i<0 && j>=0)
        {
            for(int k=0;k<=j;k++)
            {
               if(pat[k]!='*')
               {
                   return false;
               }
            }
            return true;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        if(s[i]==pat[j] or pat[j]=='?')
        {
            return dp[i][j] = solve(s,pat,i-1,j-1,dp);
        }
        
        if(pat[j]=='*')
        {
            return dp[i][j]= solve(s,pat,i,j-1,dp) | solve(s,pat,i-1,j,dp);
        }
        return dp[i][j]= false;
        
    }
    bool isMatch(string s, string p) {
        int n=s.length();
        int m=p.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(s,p,n-1,m-1,dp);
        
    }
};