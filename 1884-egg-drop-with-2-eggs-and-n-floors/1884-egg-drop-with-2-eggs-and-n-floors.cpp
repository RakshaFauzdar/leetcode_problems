class Solution {
public:
    int dp[3][1001];
    // memset(dp,-1,sizeof(dp));
    int solve(int e,int f)
    {
            // memset(dp,-1,sizeof(dp));

        if(f==0 || f==1)
        {
            return f;
        }
        
        if(e==1)
        {
            return f;
        }
        if(dp[e][f]!=-1)
        {
            return dp[e][f];
        }
        
        int ans=INT_MAX;
        for(int i=1;i<=f;i++)
        {
            int x=1+max(solve(e-1,i-1),solve(e,f-i));
                ans=min(x,ans);
        }
        return dp[e][f]=ans;
    }
    int twoEggDrop(int n) {
        
        memset(dp,-1,sizeof(dp));
        return solve(2,n);
        
    }
};