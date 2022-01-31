class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,INT_MAX);
        int c=1;
        dp[0]=0;
        while(c*c<=n)
        {
            int s=c*c;
            for(int i=s;i<n+1;i++)
            {
                dp[i]=min(dp[i-s]+1,dp[i]);
            }
            c++;
        }
        return dp[n];
        
    }
};