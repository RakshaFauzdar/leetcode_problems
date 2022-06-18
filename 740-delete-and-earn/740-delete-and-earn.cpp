class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        unordered_map<int,int>f;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            f[nums[i]]++;
        }
        
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>dp(mx+1,0);
        dp[0]=0;
//             becuase for zero the score should be zero that why it's not maxize our score sp we take dp[0]=0;
        dp[1]=f[1];
//         if we have 1 then state of 1 is the frequency of 1 in gievn array
        
        for(int i=2;i<dp.size();i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+i*f[i]);
        }
        
        
        return dp[dp.size()-1];
        
    }
};