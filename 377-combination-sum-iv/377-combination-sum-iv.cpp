class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
         int n=nums.size();
       int dp[target+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        long mod=1e9+7;
        for(long i=1;i<=target;i++)
        {
            for(long j:nums)
            {
                if(i>=j)
                {
                    dp[i]+=(dp[i-j]%mod);
                }
            }
        }
        return dp[target];
        
        
    }
};