// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    int flag=0;
 void dfs(int i,int j,int n,int m,vector<vector<int>>&v)
 {
     if(i<0 || j<0 || i>=n || j>=m || v[i][j]==0)
     {
         return;
     }
     if(v[i][j]==2)
     {
         flag=1;
         return;
     }
     v[i][j]=0;
     dfs(i,j+1,n,m,v);
     dfs(i,j-1,n,m,v);
     dfs(i+1,j,n,m,v);
     dfs(i-1,j,n,m,v);
     
 }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i,j,n,m,grid);
                }
            }
        }
        if(flag==1)
        return true;
        else
        return false;
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends