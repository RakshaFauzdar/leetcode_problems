class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(m==0 || n==0)
            return 0;
        
        
        int dp[n][m];
         memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            if(obstacleGrid[i][0]!=1)
            {
                dp[i][0]=1;
            }
            else
            {
                break;
            }
        }
        
        for(int i=0;i<m;i++)
        {
            
            if(obstacleGrid[0][i]!=1)
            {
                dp[0][i]=1;
            }
            else
            {
                break;
            }
        }
        
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                
                if(obstacleGrid[i][j]!=1)
                {
                   dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        
        return dp[n-1][m-1];

        
    }
};