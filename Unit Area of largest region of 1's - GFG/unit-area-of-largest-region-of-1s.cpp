// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int dfs(int i,int j,vector<vector<int>>&v,int n,int m)
    {
        int c=0;
        if(i>=0 && j>=0 && i<n && j<m && v[i][j]==1)
        {
            
        c++;
        v[i][j]=0;
        
        c+=dfs(i+1,j+1,v,n,m);
        c+=dfs(i-1,j-1,v,n,m);
        c+=dfs(i,j+1,v,n,m);
        c+=dfs(i,j-1,v,n,m);
        c+=dfs(i+1,j,v,n,m);
        c+=dfs(i-1,j,v,n,m);
        c+=dfs(i-1,j+1,v,n,m);
        c+=dfs(i+1,j-1,v,n,m);
        }
        return c;
    }
    int findMaxArea(vector<vector<int>>& grid) {
      int mx=INT_MIN;
      int n=grid.size();
      int m=grid[0].size();
      for(int i=0;i<n;i++)
      {
        //  int c=0;
          for(int j=0;j<m;j++)
          {
              
              if(grid[i][j]==1)
              {
                 
                  mx=max(mx,dfs(i,j,grid,n,m));
                 
              }
          }
          
      }
      return mx;
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
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends