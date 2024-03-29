class Solution {
public:
    
    int solve(int i,int j,string &s,string &s1,vector<vector<int>>&dp)
    {
        if(i<0|| j<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(s[i]==s1[j])
        {
            return dp[i][j]=1+solve(i-1,j-1,s,s1,dp);
        }
        return dp[i][j]=max(solve(i-1,j,s,s1,dp),solve(i,j-1,s,s1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        return solve(n-1,m-1,text1,text2,dp);
        
        
    }
};