// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    int m=edges.size();
	    vector<int>d(n,1e9+7);
	    
	    d[0]=0;
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {
	        for(auto it:edges)
	        {
	            int u=it[0];
	            int v=it[1];
	            int w=it[2];
	            if(d[v]>d[u]+w)
	            {
	                d[v]=d[u]+w;
	                
	                
	            }
	            
	            
	        }
	    }
	    for(auto it:edges)
	    {
	        if(d[it[0]]+it[2]<d[it[1]])
	        {
	            flag=1;
	        }
	    }
	    return flag;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends