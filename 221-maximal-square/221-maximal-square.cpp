class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        if(n==0)return 0;
        
         int m=matrix[0].size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int mx=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(matrix[i-1][j-1]=='1')
                {
                    dp[i][j]=min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1])+1;
                    mx=max(mx,dp[i][j]);
                }
            }
        }
        return mx*mx;
        
    }
};