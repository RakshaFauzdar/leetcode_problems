class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
//         int mx=1;
//         for(int i=0;i<n;i++)
//         {
//             int c=1;
//             int x=nums[i];
//             for(int j=i;j<n;j++)
//             {
//                 if(x<nums[j])
//                 {
//                     c++;
//                     x=nums[j];
                   
//                 }
                
//             }
//             mx=max(mx,c);
//         }
//         return mx;
        vector<int>dp(n+1,1);
        int mx=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                    mx=max(mx,dp[i]);
                }
            }
        }
        return mx;
        
    }
};