// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
    bool  is(int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m)
        return false;
        
        return true;
    }
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>>v(n,vector<int>(m,-1));
	    queue<pair<int,int>>q;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                v[i][j]=0;
	                q.push({i,j});
	            }
	        }
	    }
	    
	    while(q.empty()==false)
	    {
	        int i=q.front().first;
	        int j=q.front().second;
	        q.pop();
	        
	        
	        if(is(i,j+1,n,m) && v[i][j+1]==-1)
	        {
	            q.push({i,j+1});
	            v[i][j+1]=v[i][j]+1;
	        }
	        
	        if(is(i,j-1,n,m) && v[i][j-1]==-1)
	        {
	            q.push({i,j-1});
	            v[i][j-1]=v[i][j]+1;
	        }
	        
	        if(is(i+1,j,n,m) && v[i+1][j]==-1)
	        {
	            q.push({i+1,j});
	            v[i+1][j]=v[i][j]+1;
	        }
	        
	        if(is(i-1,j,n,m) && v[i-1][j]==-1)
	        {
	            q.push({i-1,j});
	            v[i-1][j]=v[i][j]+1;
	        }
	        
	        
	        
	    }
	    
	    return v;
	    
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
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends