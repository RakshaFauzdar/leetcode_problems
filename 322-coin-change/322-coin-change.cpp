class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        int n=coins.size();
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            dp[i]=INT_MAX;
        }
        
        int ans=INT_MAX;
        for(int i=1;i<=amount;i++)
        {
             int ans=INT_MAX;
            for(auto j:coins)
            {
                if(j<=i)
                {
                    ans=min(dp[i-j],ans);
                }
            }
            if(ans==INT_MAX)
            {
                dp[i]=ans;
            }
            else
            {
                dp[i]=ans+1;
            }
        }
        if(dp[amount]==INT_MAX)
        {
            return -1;
        }
        else
        {
            return dp[amount];
        }
        
    }
};