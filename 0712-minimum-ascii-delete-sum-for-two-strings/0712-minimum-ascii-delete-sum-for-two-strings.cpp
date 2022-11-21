class Solution {
public:
    
    
    int solve(int i,int j,string &s,string &s1,vector<vector<int>>&dp)
    {
        if(i<0 || j<0)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        
        if(s[i]==s1[j])
        {
            return dp[i][j]=s[i] + solve(i-1,j-1,s,s1,dp);
        }
        return  dp[i][j]=max(solve(i-1,j,s,s1,dp),solve(i,j-1,s,s1,dp));
        
    }
    int minimumDeleteSum(string s1, string s2) {
        
        
        int n=s1.size();
        int m=s2.size();
        
        int sum=0;
        int sum1=0;
       for(auto it:s1)
       {
           sum+=it;
       }
        
        for(auto it:s2)
        {
            sum1+=it;
        }
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        return (sum1+sum)-2*solve(n-1,m-1,s1,s2,dp);
        
        
    }
};