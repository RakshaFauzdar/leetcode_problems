//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int dp[1001][1001];
    int solve(int n,int m,int i,int j,vector<vector<int>>&matrix)
    {
        if(i<0 || j<0 || i>=n ||j >=m )return 0;
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int x=INT_MIN;
        int y=INT_MIN;
        int w=INT_MIN;
        int z=INT_MIN;
        
        if(i>0 && (matrix[i][j]<matrix[i-1][j]))
        {
            x=1+solve(n,m,i-1,j,matrix);
        }
        if(j>0 && (matrix[i][j]<matrix[i][j-1]))
        {
            y=1+solve(n,m,i,j-1,matrix);
        }
        if(i<n-1 && (matrix[i][j]<matrix[i+1][j]))
        {
            w=1+solve(n,m,i+1,j,matrix);
        }
        if(j<m-1 && (matrix[i][j]<matrix[i][j+1]))
        {
            z=1+solve(n,m,i,j+1,matrix);
        }
        
        return dp[i][j]=max({x,y,w,z,1});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix, int n, int m) {

        // Code here
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,solve(n,m,i,j,matrix));
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.longestIncreasingPath(matrix, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends