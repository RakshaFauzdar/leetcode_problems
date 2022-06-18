class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(k==0 || n==0)
            return 0;
        int dp[k+1][n+1];
        for(int i=0;i<=k;i++)
        {
            dp[i][0]=0;
        }
        for(int i=0;i<=n;i++)
        {
            dp[0][i]=0;
        }
        
        
        for(int i=1;i<=k;i++)
        {
            for(int j=1;j<n;j++)
            {
                int mx=INT_MIN;
                for(int k=0;k<j;k++)
                {
                    mx=max(mx,prices[j]-prices[k]+dp[i-1][k]);
                }
                
                dp[i][j]=max(mx,dp[i][j-1]);
                
            }
        }
        return dp[k][n-1];
    }
};