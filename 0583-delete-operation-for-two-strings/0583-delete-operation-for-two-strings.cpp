class Solution {
public:
    int solve(string s,string s1,int i,int j,vector<vector<int>>&dp)
    {
        if(i==0)return j;
        if(j==0)return i;
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        if(s[i-1]==s1[j-1])
        {
            return dp[i][j]=solve(s,s1,i-1,j-1,dp);
        }
        
        return dp[i][j]=1+min(solve(s,s1,i-1,j,dp),solve(s,s1,i,j-1,dp));
    }
    int minDistance(string word1, string word2) {
        
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        
        return solve(word1,word2,n,m,dp);
        
        
    }
};