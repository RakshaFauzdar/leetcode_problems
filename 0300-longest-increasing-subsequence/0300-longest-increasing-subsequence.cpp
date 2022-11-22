class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n+1,1);
      
        int ans=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(nums[i]>nums[j])
                {
                    dp[i]=max(dp[j]+1,dp[i]);
                    ans=max(ans,dp[i]);
                }
            }
        }
        return ans;
        
    }
};