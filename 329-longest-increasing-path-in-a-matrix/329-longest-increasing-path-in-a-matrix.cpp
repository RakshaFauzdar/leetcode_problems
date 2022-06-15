class Solution {
public:
    int n,m;
    vector<vector<int>>dp;
    int r[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    int solve(vector<vector<int>>&v,int i ,int j)
    {
        if(dp[i][j])
            return dp[i][j];
        int mx=0;
        for(auto it:r)
        {
            int r1=i+it[0];
            int r2=j+it[1];
            if(r1<n && r2<m && r1>=0 && r2>=0 && v[i][j]<v[r1][r2])
            {
                mx=max(mx,solve(v,r1,r2));
            }
        }
        dp[i][j]=mx+1;
        return dp[i][j];
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        int ans=0;
        dp=vector<vector<int>>(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,solve(matrix,i,j));
            }
        }
        
        
        return ans;
        
    }
};