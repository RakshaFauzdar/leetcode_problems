class Solution {
public:
    int maxCoins(vector<int>& nums) {
//         int n=nums.size();
//         nums.insert(nums.begin(),1);
//         nums.push_back(1);
        
        
//         vector<vector<int>>dp(n,vector<int>(n,0));
//         for(int i=1;i<=n;i++)
//         {
//             for(int l=1;l<=n-i+1;l++)
//             {
//                 int r=l+i-1;
//                 for(int k=l;k<=r;k++)
//                 {
//                     dp[l][r]=max(dp[l][r],nums[l-1]*nums[k]*nums[r+1]+dp[l][k-1]+dp[k+1][r]);
//                 }
//             }
//         }
//         return dp[1][n];
         int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), 0));
        for (int len = 1; len <= n; ++len)
            for (int left = 1; left <= n - len + 1; ++left) {
                int right = left + len - 1;
                for (int k = left; k <= right; ++k)
                    dp[left][right] = max(dp[left][right], nums[left-1]*nums[k]*nums[right+1] + dp[left][k-1] + dp[k+1][right]);
            }
        return dp[1][n];
        
        
    }
};