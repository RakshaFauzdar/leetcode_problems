// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	
	void dfs(int i,stack<int>&st,vector<int>&vis,int v,vector<int>adj[])
	{
	    vis[i]=1;
	    for(auto it:adj[i])
	    {
	        if(vis[it]==0)
	        {
	            dfs(it,st,vis,v,adj);
	        }
	    }
	    st.push(i);
	}
	
	void dfs1(int i,vector<int>&vis,vector<int>cop[])
	{
	    vis[i]=1;
	    for(auto it:cop[i])
	    {
	        if(vis[it]==0)
	        {
	            dfs1(it,vis,cop);
	        }
	    }
	}
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int>st;
        vector<int>vis(V);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,st,vis,V,adj);
            }
        }
        
        vector<int>transpose[V];
        for(int i=0;i<V;i++)
        {
        
            for(auto it:adj[i])
            {
                transpose[it].push_back(i);
            }
        }
        int ans=0;
        vector<int>vis1(V);
        while(!st.empty())
        {
            int t=st.top();
            st.pop();
            if(vis1[t]==0)
            {
                ans++;
                dfs1(t,vis1,transpose);
            }
        }
        return ans;
        
      
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends