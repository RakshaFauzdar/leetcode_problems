class Solution {
public:
    
    
    int solve(int n,vector<int>&cost,vector<int>&dp)
    {
        if(n<0)
        {
            return 0;
        }
        if(n==1 || n==0)
        {
            return cost[n];
        }
        if(dp[n]!=0)
        {
            return dp[n];
        }
        
        dp[n]= cost[n]+min(solve(n-1,cost,dp),solve(n-2,cost,dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int>dp(n);
        
        return min(solve(n-1,cost,dp),solve(n-2,cost,dp));
        
       
        
    }
};