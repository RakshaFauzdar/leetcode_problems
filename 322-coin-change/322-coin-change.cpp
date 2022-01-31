class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int mx=1000000000;
        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            dp[i]=mx;
        }
        for(int i=1;i<=amount;i++)
        {
            int ans=mx;
            for(auto j:coins)
            {
                if(j<=i)
                {
                    ans=min(ans,dp[i-j]);
                }
            }
            if(ans==mx)
            {
                dp[i]=mx;
            }
            else
            {
                dp[i]=ans+1;
            }
        }
        if(dp[amount]==mx)
            return -1;
        else
            return dp[amount];
        
    }
};