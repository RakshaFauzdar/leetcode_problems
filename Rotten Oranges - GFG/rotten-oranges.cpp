// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    bool isSafe(int i,int j,int n,int m)
    {
        if(i<0 || j<0|| i>=n || j>=m)
        return false;
        
        
        return true;
    }
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int cnt=2;
        bool flag=false;
        while(true)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==cnt)
                {
                    if(isSafe(i+1,j,n,m) && grid[i+1][j]==1)
                    {
                        grid[i+1][j]=grid[i][j]+1;
                        flag=true;
                    }
                    if(isSafe(i-1,j,n,m) && grid[i-1][j]==1)
                    {
                        grid[i-1][j]=grid[i][j]+1;
                        flag=true;
                    }
                    if(isSafe(i,j+1,n,m) && grid[i][j+1]==1)
                    {
                        grid[i][j+1]=grid[i][j]+1;
                        flag=true;
                    }
                    if(isSafe(i,j-1,n,m) && grid[i][j-1]==1)
                    {
                        grid[i][j-1]=grid[i][j]+1;
                        flag=true;
                    }
                }
            }
        }
        
        if(flag==false)
        break;
        flag=false;
        cnt++;
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        
        return cnt-2;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends